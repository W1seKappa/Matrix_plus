#include "./test.h"

// test_exception constructor

TEST(TestConstructor, TestExceptionConstructor1) {
  EXPECT_ANY_THROW(S21Matrix(-50, 100));
}

TEST(TestConstructor, TestExceptionConstructor2) {
  EXPECT_ANY_THROW(S21Matrix(100, -50));
}

TEST(TestConstructor, TestExceptionConstructor3) {
  EXPECT_ANY_THROW(S21Matrix(-50, -100));
}

// test_good_creation

TEST(TestConstructor, TestParametersConstructor1) {
  S21Matrix check_matrix(8, 4);
  EXPECT_EQ(check_matrix.get_rows(), 8);
  EXPECT_EQ(check_matrix.get_cols(), 4);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 0.0);
}

TEST(TestConstructor, TestParametersConstructor2) {
  S21Matrix check_matrix(444, 999);
  EXPECT_EQ(check_matrix.get_cols(), 999);
  EXPECT_EQ(check_matrix.get_rows(), 444);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 0.0);
}

TEST(TestConstructor, TestCopyConstructor1) {
  S21Matrix check_matrix = S21Matrix(3, 3);
  check_matrix(0, 0) = 8.0;
  check_matrix(0, 1) = 8.0;
  check_matrix(0, 2) = 8.0;
  check_matrix(1, 0) = 8.0;
  check_matrix(1, 1) = 8.0;
  check_matrix(1, 2) = 8.0;
  check_matrix(2, 0) = 8.0;
  check_matrix(2, 1) = 8.0;
  check_matrix(2, 2) = 8.0;

  S21Matrix copy_matrix = check_matrix;

  EXPECT_EQ(check_matrix.get_cols(), 3);
  EXPECT_EQ(check_matrix.get_rows(), 3);

  EXPECT_EQ(copy_matrix.get_rows(), 3);
  EXPECT_EQ(copy_matrix.get_cols(), 3);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 8.0);
  s21_matrix_test_helper::CheckMatrix(copy_matrix, 8.0);
}

TEST(TestConstructor, TestCopyConstructor2) {
  S21Matrix check_matrix = S21Matrix(2, 2);

  check_matrix(0, 0) = 5.0;
  check_matrix(0, 1) = 5.0;
  check_matrix(1, 0) = 5.0;
  check_matrix(1, 1) = 5.0;

  S21Matrix copy_matrix(check_matrix);

  EXPECT_EQ(check_matrix.get_cols(), 2);
  EXPECT_EQ(check_matrix.get_rows(), 2);

  EXPECT_EQ(copy_matrix.get_rows(), 2);
  EXPECT_EQ(copy_matrix.get_cols(), 2);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 5.0);
  s21_matrix_test_helper::CheckMatrix(copy_matrix, 5.0);
}

TEST(TestConstructor, TestMoveConstructor1) {
  S21Matrix check_matrix =
      s21_matrix_test_helper::MoveConstructorTest(S21Matrix{5, 5});

  EXPECT_EQ(check_matrix.get_cols(), 5);
  EXPECT_EQ(check_matrix.get_rows(), 5);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 0.0);
}

TEST(TestConstructor, TestMoveConstructor2) {
  S21Matrix test_matrix(12, 12);
  s21_matrix_test_helper::FillMatrix(test_matrix, 4.4);

  S21Matrix check_matrix = std::move(test_matrix);

  EXPECT_EQ(check_matrix.get_rows(), 12);
  EXPECT_EQ(check_matrix.get_cols(), 12);
  EXPECT_EQ(test_matrix.get_cols(), 0);
  EXPECT_EQ(test_matrix.get_rows(), 0);

  s21_matrix_test_helper::CheckMatrix(check_matrix, 4.4);
}

// operators_assignment operator

TEST(TestConstructor, TestCopyAssignment) {
  S21Matrix test_matrix(5, 5);
  S21Matrix check_matrix(2, 2);

  s21_matrix_test_helper::FillMatrix(test_matrix, 5.0);
  s21_matrix_test_helper::FillMatrix(check_matrix, 3.0);

  check_matrix = test_matrix;

  EXPECT_EQ(check_matrix.get_rows(), 5);
  EXPECT_EQ(check_matrix.get_cols(), 5);
  EXPECT_EQ(test_matrix.get_rows(), 5);
  EXPECT_EQ(test_matrix.get_cols(), 5);

  s21_matrix_test_helper::CheckMatrix(test_matrix, 5.0);
  s21_matrix_test_helper::CheckMatrix(check_matrix, 5.0);
}
