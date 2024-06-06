#include "s21_matrix_oop.h"

#include <algorithm>
#include <cmath>
#include <stdexcept>
S21Matrix::S21Matrix() noexcept
    : rows_(0), cols_(0), matrix_(nullptr) {}  // default constructor

S21Matrix::S21Matrix(int rows, int cols)
    : rows_(rows), cols_(cols) {  // constr with par
  if (rows_ < 0 || cols_ < 0) {
    throw std::length_error("Matrix size must be greater or equal than zero");
  }

  matrix_ = new double[rows_ * cols_]{};
}

S21Matrix::S21Matrix(const S21Matrix &other)
    : rows_(other.rows_),
      cols_(other.cols_),
      matrix_(new double[rows_ * cols_]) {  // copy constr
  std::copy(other.matrix_, other.matrix_ + rows_ * cols_, matrix_);
}

S21Matrix::S21Matrix(S21Matrix &&other) noexcept
    : rows_(other.rows_),
      cols_(other.cols_),
      matrix_(other.matrix_) {  // move constructor
  other.matrix_ = nullptr;
  other.rows_ = 0;
  other.cols_ = 0;
}

S21Matrix &S21Matrix::operator=(
    const S21Matrix &other) {  // оператор присваивания копированием
  S21Matrix copy{other};
  *this = std::move(copy);
  return *this;
}

S21Matrix &S21Matrix::operator=(
    S21Matrix &&other) noexcept {  // оператор присваивания копированием
  if (this != &other) {
    Clear();
    std::swap(rows_, other.rows_);
    std::swap(cols_, other.cols_);
    std::swap(matrix_, other.matrix_);
  }
  return *this;
}

S21Matrix::~S21Matrix() noexcept { Clear(); }

bool S21Matrix::EqMatrix(const S21Matrix &other) const {
  if (rows_ != other.rows_ || cols_ != other.cols_) {
    return false;
  }
  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      if (std::abs(other(i, j) - (*this)(i, j)) > Epsilon) {
        return false;
      }
    }
  }
  return true;
}

void S21Matrix::SumMatrix(const S21Matrix &other) {
  if (rows_ != other.get_rows() || cols_ != other.get_cols()) {
    throw std::logic_error("Incorrect matrix size for sum");
  }

  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      (*this)(i, j) += other(i, j);
    }
  }
}

void S21Matrix::SubMatrix(const S21Matrix &other) {
  if (rows_ != other.get_rows() || cols_ != other.get_cols()) {
    throw std::logic_error("Incorrect matrix size for sub");
  }

  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      (*this)(i, j) -= other(i, j);
    }
  }
}

void S21Matrix::MulNumber(const double number) noexcept {
  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      (*this)(i, j) *= number;
    }
  }
}

void S21Matrix::MulMatrix(const S21Matrix &other) {
  if (cols_ != other.get_rows()) {
    throw std::logic_error("Incorrect matrix size for Multi");
  }

  S21Matrix result{rows_, other.get_cols()};

  for (int i = 0; i < result.get_rows(); i++) {
    for (int j = 0; j < result.get_cols(); j++) {
      for (int k = 0; k < cols_; k++) {
        result(i, j) += (*this)(i, k) * other(k, j);
      }
    }
  }
  *this = std::move(result);
}

S21Matrix S21Matrix::Transpose() const {
  S21Matrix result{cols_, rows_};

  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      result(j, i) = (*this)(i, j);
    }
  }
  return result;
}

S21Matrix S21Matrix::CalcComplements() const {
  if (rows_ != cols_) {
    throw std::logic_error("Incorrect matrix size for CalcComplements");
  }

  S21Matrix result{rows_, cols_};

  for (int i = 0; i < result.get_rows(); i++) {
    for (int j = 0; j < result.get_cols(); j++) {
      S21Matrix minor_matrix = GetMinor(i, j);
      result(i, j) = minor_matrix.Determinant();

      if ((i + j) % 2 != 0) {
        result(i, j) = -result(i, j);
      }
    }
  }
  return result;
}

double S21Matrix::Determinant() const {
  if (rows_ != cols_) {
    throw std::logic_error("Incorrect matrix size for Determinant");
  }

  double result = 1.0;
  S21Matrix tmp{*this};
  int size = rows_;

  for (int i = 0; i < size; i++) {
    int piv = i;
    for (int j = i + 1; j < size; j++) {
      if (std::abs(tmp(i, j)) > std::abs(tmp(piv, i))) {
        piv = j;
      }
    }
    if (std::abs(tmp(piv, i)) < Epsilon) {
      return 0.0;
    }

    tmp.SwapRows(i, piv);

    result *= tmp(i, i);

    if (i != piv) {
      result = -result;
    }

    for (int j = i + 1; j < size; j++) {
      double kf = tmp(j, i) / tmp(i, i);
      for (int k = i; k < size; k++) {
        tmp(j, k) -= tmp(i, k) * kf;
      }
    }
  }
  return result;
}

S21Matrix S21Matrix::InverseMatrix() const {
  if (rows_ != cols_) {
    throw std::logic_error("Incorrect matrix size for Inverse");
  }

  double det = Determinant();

  if (std::abs(det) < Epsilon) {
    throw std::logic_error(
        "Determinant must be not zero to calculate InverseMatrix");
  }

  return Transpose().CalcComplements() * (1.0 / det);
}

int S21Matrix::get_rows() const noexcept { return rows_; }

int S21Matrix::get_cols() const noexcept { return cols_; }

void S21Matrix::set_rows(int rows_new) {
  if (rows_new < 0) {
    throw std::length_error("Matrix row can be 0 minimum");
  }

  if (rows_new != rows_) {
    S21Matrix tmp{rows_new, cols_};
    int min = std::min(rows_, rows_new);
    for (int i = 0; i < min; i++) {
      for (int j = 0; j < cols_; j++) {
        tmp(i, j) = (*this)(i, j);
      }
    }
    *this = std::move(tmp);
  }
}

void S21Matrix::set_cols(int cols_new) {
  if (cols_new < 0) {
    throw std::length_error("Matrix cols can be 0 minimum");
  }

  if (cols_new != rows_) {
    S21Matrix tmp{rows_, cols_new};
    int min = std::min(cols_, cols_new);
    for (int i = 0; i < rows_; i++) {
      for (int j = 0; j < min; j++) {
        tmp(i, j) = (*this)(i, j);
      }
    }
    *this = std::move(tmp);
  }
}

double &S21Matrix::operator()(int row, int col) & {
  return const_cast<double &>(GetEl(row, col));
}

const double &S21Matrix::operator()(int row, int col) const & {
  return GetEl(row, col);
}

bool S21Matrix::operator==(const S21Matrix &other) const {
  return EqMatrix(other);
}

S21Matrix S21Matrix::operator+(const S21Matrix &other) const {
  S21Matrix tmp(*this);
  tmp.SumMatrix(other);
  return tmp;
}

S21Matrix &S21Matrix::operator+=(const S21Matrix &other) {
  SumMatrix(other);
  return *this;
}

S21Matrix S21Matrix::operator-(const S21Matrix &other) const {
  S21Matrix tmp{*this};
  tmp.SubMatrix(other);
  return tmp;
}

S21Matrix &S21Matrix::operator-=(const S21Matrix &other) {
  SubMatrix(other);
  return *this;
}

S21Matrix S21Matrix::operator*(
    double number) const noexcept {  // умножение объекта на число
  S21Matrix tmp(*this);
  tmp.MulNumber(number);
  return tmp;
}

S21Matrix operator*(
    double number,
    const S21Matrix &matrix) noexcept {  // умножение числа на объект
  S21Matrix tmp = matrix * number;
  return tmp;
}

S21Matrix &S21Matrix::operator*=(double number) {
  MulNumber(number);
  return *this;
}

S21Matrix S21Matrix::operator*(const S21Matrix &other) const {
  S21Matrix tmp(*this);
  tmp.MulMatrix(other);
  return tmp;
}

S21Matrix &S21Matrix::operator*=(const S21Matrix &other) {
  MulMatrix(other);
  return *this;
}

void S21Matrix::Clear()

    noexcept {
  delete[] matrix_;
  rows_ = 0;
  cols_ = 0;
  matrix_ = nullptr;
}

const double &S21Matrix::GetEl(int row, int col) const {
  if (row >= rows_ || col >= cols_ || row < 0 || col < 0) {
    throw std::out_of_range("Incorrect input for (), index is out of range");
  }
  return matrix_[row * cols_ + col];
}

void S21Matrix::SwapRows(int row1, int row2)

    noexcept {
  if (row1 != row2) {
    for (int i = 0; i < cols_; i++) {
      std::swap((*this)(row1, i), (*this)(row2, i));
    }
  }
}

S21Matrix S21Matrix::GetMinor(const int skip_row, const int skip_column) const {
  S21Matrix result{rows_ - 1, cols_ - 1};

  int shift_i = 0;
  for (int i = 0; i < result.get_rows(); i++) {
    if (i == skip_row) {
      shift_i = 1;
    }
    int shift_j = 0;
    for (int j = 0; j < result.get_cols(); j++) {
      if (j == skip_column) {
        shift_j = 1;
      }
      result(i, j) = (*this)(i + shift_i, j + shift_j);
    }
  }
  return result;
}