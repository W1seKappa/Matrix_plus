#include "./test.h"

// test_exception

TEST(TestCalcComplements, TestExceptionCalcComplements1) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_bef = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_bef);
}

TEST(TestCalcComplements, TestExceptionCalcComplements2) {
  S21Matrix test_matrix(3, 2);

  EXPECT_EQ(test_matrix.get_cols(), 2);
  EXPECT_EQ(test_matrix.get_rows(), 3);

  S21Matrix matrix_bef = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_bef);
}

// test_matrix_1n1

TEST(TestCalcComplements, TestOneMatrixCalcComplements1) {
  S21Matrix test_matrix(1, 1);

  EXPECT_EQ(test_matrix.get_rows(), 1);
  EXPECT_EQ(test_matrix.get_cols(), 1);

  S21Matrix matrix_bef = test_matrix;
  S21Matrix result;

  EXPECT_NO_THROW(result = test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_bef);

  EXPECT_EQ(result.get_cols(), 1);
  EXPECT_EQ(result.get_rows(), 1);
  EXPECT_EQ(result(0, 0), 1.0);
}

TEST(TestCalComplements, TestOneMatrixCalcComplements2) {
  S21Matrix test_matrix(1, 1);

  EXPECT_EQ(test_matrix.get_rows(), 1);
  EXPECT_EQ(test_matrix.get_cols(), 1);

  test_matrix(0, 0) = 5.0;
  S21Matrix matrix_bef = test_matrix;
  S21Matrix result;

  EXPECT_NO_THROW(result = test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_bef);

  EXPECT_EQ(result.get_cols(), 1);
  EXPECT_EQ(result.get_rows(), 1);
  EXPECT_EQ(result(0, 0), 1.0);
}

// test_zeros_matrixcomplements

TEST(TestCalcComplements, TestZeroCalcComplements1) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.get_rows(), 3);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix check_result{3, 3};
  EXPECT_EQ(check_result.get_cols(), 3);
  EXPECT_EQ(check_result.get_rows(), 3);

  s21_matrix_test_helper::CheckMatrix(check_result, 0.0);

  matrix1(0, 0) = -3.00;
  matrix1(0, 1) = 6.00;
  matrix1(0, 2) = -3.00;
  matrix1(1, 0) = 6.00;
  matrix1(1, 1) = -12.00;
  matrix1(1, 2) = 6.00;
  matrix1(2, 0) = -3.00;
  matrix1(2, 1) = 6.00;
  matrix1(2, 2) = -3.00;

  S21Matrix matrix_bef = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == check_result);
  EXPECT_TRUE(matrix1 == matrix_bef);
}

// common_matrix_test

TEST(TestCalcComplements, TestCalcComplements1) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  S21Matrix check_result{2, 2};
  EXPECT_EQ(check_result.get_cols(), 2);
  EXPECT_EQ(check_result.get_rows(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  check_result(0, 0) = 4;
  check_result(0, 1) = -3;
  check_result(1, 0) = -2;
  check_result(1, 1) = 1;
  S21Matrix matrix_bef = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == check_result);
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestCalcComplements, TestCalcComplements2) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_cols(), 2);
  EXPECT_EQ(matrix1.get_rows(), 2);

  S21Matrix result_check{2, 2};
  EXPECT_EQ(result_check.get_cols(), 2);
  EXPECT_EQ(result_check.get_rows(), 2);

  matrix1(0, 0) = 12.452;
  matrix1(0, 1) = 3.34245;
  matrix1(1, 0) = 3.356;
  matrix1(1, 1) = 3.543;

  result_check(0, 0) = 3.543;
  result_check(0, 1) = -3.356;
  result_check(1, 0) = -3.34245;
  result_check(1, 1) = 12.452;

  S21Matrix matrix_before = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == result_check);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplements3) {
  S21Matrix matrix1(3, 3);
  EXPECT_EQ(matrix1.get_rows(), 3);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix result_check{3, 3};
  EXPECT_EQ(result_check.get_cols(), 3);
  EXPECT_EQ(result_check.get_rows(), 3);

  matrix1(0, 0) = 1;
  matrix1(1, 0) = 2;
  matrix1(2, 0) = 3;
  matrix1(0, 1) = 4;
  matrix1(1, 1) = 5;
  matrix1(2, 1) = 6;
  matrix1(0, 2) = 7;
  matrix1(1, 2) = 8;
  matrix1(2, 2) = 9;

  result_check(0, 0) = -3;
  result_check(1, 0) = 6;
  result_check(2, 0) = -3;
  result_check(0, 1) = 6;
  result_check(1, 1) = -12;
  result_check(2, 1) = 6;
  result_check(0, 2) = -3;
  result_check(1, 2) = 6;
  result_check(2, 2) = -3;

  S21Matrix matrix_before = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == result_check);
  EXPECT_TRUE(matrix1 == matrix_before);
}