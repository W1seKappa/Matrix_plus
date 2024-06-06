#include "./test.h"

// test_exception_determinant

TEST(TestDeterminant, TestExceptionDeterminant1) {
  S21Matrix matrix_test(2, 3);
  S21Matrix matrix_bef = matrix_test;

  EXPECT_ANY_THROW(matrix_test.Determinant());
  EXPECT_TRUE(matrix_test == matrix_bef);
}

TEST(TestDeterminant, TestExceptionDeterminant2) {
  S21Matrix matrix_test(3, 2);
  S21Matrix matrix_bef = matrix_test;

  EXPECT_ANY_THROW(matrix_test.Determinant());
  EXPECT_TRUE(matrix_test == matrix_bef);
}

TEST(TestDeterminant, TestExceptionDeterminant3) {
  S21Matrix matrix_test(42, 2);
  S21Matrix matrix_bef = matrix_test;

  EXPECT_ANY_THROW(matrix_test.Determinant());
  EXPECT_TRUE(matrix_test == matrix_bef);
}

// test_determinant_zero

TEST(TestDeterminant, TestZeroDeterminant1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.get_cols(), 1);
  EXPECT_EQ(matrix1.get_rows(), 1);

  matrix1(0, 0) = 0.0;

  double result_check = 0.0;
  S21Matrix matrix_bef = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestDeterminant, TestZeroDeterminant2) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.get_cols(), 3);
  EXPECT_EQ(matrix1.get_rows(), 3);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(0, 2) = 1.3;
  matrix1(1, 0) = 1.4;
  matrix1(1, 1) = 1.5;
  matrix1(1, 2) = 1.6;
  matrix1(2, 0) = 1.7;
  matrix1(2, 1) = 1.8;
  matrix1(2, 2) = 1.9;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestZeroDeterminant3) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.get_cols(), 3);
  EXPECT_EQ(matrix1.get_rows(), 3);

  matrix1(0, 0) = 9.89841e+07;
  matrix1(0, 1) = 7.57375e+07;
  matrix1(0, 2) = 7.57375e+07;

  matrix1(1, 0) = 1.90939e+07;
  matrix1(1, 1) = 7.57375e+07;
  matrix1(1, 2) = 7.57375e+07;

  matrix1(2, 0) = -4.32978e+07;
  matrix1(2, 1) = 7.57375e+07;
  matrix1(2, 2) = 7.57375e+07;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_before);
}

// test_non-zero_determinant

TEST(TestDeterminant, TestNonZeroDeterminant1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.get_cols(), 1);
  EXPECT_EQ(matrix1.get_rows(), 1);

  matrix1(0, 0) = 1.5;

  double check_result = 1.5;
  S21Matrix matrix_bef = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(check_result, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestDeterminant, TestNonZeroDeterminant2) {
  S21Matrix matrix1(2, 2);
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(1, 0) = 1.3;
  matrix1(1, 1) = 1.4;

  double check_result = -0.02;
  S21Matrix matrix_bef = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(check_result, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestDeterminant, TesNonZeroDeterminant3) {
  S21Matrix matrix1(2, 2);
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  matrix1(0, 0) = 7.72122069261968;
  matrix1(1, 0) = -7.3629210004583;
  matrix1(0, 1) = 8.93235725676641;
  matrix1(1, 1) = 2.69165195827372;

  double check_result = 86.5510796270;
  S21Matrix matrix_bef = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(check_result, result, s21_matrix_test_helper::Epsilon);
  EXPECT_TRUE(matrix1 == matrix_bef);
}
