#include "test_helper_classes.h"

#include <gtest/gtest.h>

#include <random>

#include "./test_helper_classes.h"

namespace s21_matrix_test_helper {
S21Matrix MoveConstructorTest(S21Matrix test) { return test; }

void Print(const S21Matrix& matrix) {
  std::cout << "[" << matrix.get_rows() << " x " << matrix.get_cols() << "]"
            << std::endl;

  for (int i = 0; i < matrix.get_rows(); i++) {
    for (int j = 0; j < matrix.get_cols(); j++) {
      std::cout << matrix(i, j);
      if (j != matrix.get_cols() - 1) {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
  std::cout << std::endl;
}
void PrintTest(const S21Matrix& matrix) {
  for (int i = 0; i < matrix.get_rows(); i++) {
    for (int j = 0; j < matrix.get_cols(); j++) {
      std::cout << "matrix1" << i << ", " << j << ") = " << matrix(i, j) << ";"
                << std::endl;
    }
  }
}

int GetRandInt(int min, int max) {
  std::random_device rd;
  std::mt19937 generator(rd());
  std::uniform_int_distribution<> distribution(min, max);
  return distribution(generator);
}

double GetRandDouble(double min, double max) {
  std::random_device rd;
  std::mt19937 generator(rd());
  std::uniform_real_distribution<double> distribution(min, max);
  return distribution(generator);
}

S21Matrix GetRandMatrix(int rows, int cols, double min, double max) {
  S21Matrix result{rows, cols};

  for (int i = 0; i < result.get_rows(); i++) {
    for (int j = 0; j < result.get_cols(); j++) {
      result(i, j) = s21_matrix_test_helper::GetRandDouble(min, max);
    }
  }
  return result;
}

void FillMatrix(S21Matrix& matrix, double val) {
  for (int i = 0; i < matrix.get_rows(); i++) {
    for (int j = 0; j < matrix.get_cols(); j++) {
      matrix(i, j) = val;
    }
  }
}

void CheckMatrix(const S21Matrix& matrix, double val) {
  for (int i = 0; i < matrix.get_rows(); i++) {
    for (int j = 0; j < matrix.get_cols(); j++) {
      ASSERT_NEAR(matrix(i, j), val, s21_matrix_test_helper::Epsilon);
    }
  }
}

void TestInverse(const S21Matrix& matrix) {
  S21Matrix matrix_b = matrix;
  double det = matrix.Determinant();
  if (std::abs(det) < s21_matrix_test_helper::Epsilon) {
    EXPECT_ANY_THROW(matrix.InverseMatrix());
  } else {
    S21Matrix matrix_inverse = matrix.InverseMatrix();
    S21Matrix matrix_m = matrix * matrix_inverse;
    S21Matrix matrix_i =
        s21_matrix_test_helper::GetIdenticMatrix(matrix.get_rows());
    EXPECT_TRUE(matrix_m == matrix_i);
  }
  EXPECT_TRUE(matrix == matrix_b);
}

S21Matrix GetIdenticMatrix(int size) {
  S21Matrix result{size, size};
  for (int i = 0; i < result.get_rows(); i++) {
    for (int j = 0; j < result.get_cols(); j++) {
      if (i == j) {
        result(i, j) = 1.0;
      }
    }
  }
  return result;
}

}  // namespace s21_matrix_test_helper