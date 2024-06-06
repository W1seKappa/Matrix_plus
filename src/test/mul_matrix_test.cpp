#include "./test.h"

// exception_func_mul_matrix

TEST(TestMulMatrix, TestMulMatrixFuncException1) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(3, 2);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException2) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(2, 3);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(3, 3);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException4) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 2.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 4.2);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException5) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 2.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 4.2);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException6) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 2.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 4.2);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixFuncException7) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 2.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 4.2);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

// exception_test_operation_mul

TEST(TestMulMatrix, TestMulMatrixOperException1) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException2) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException3) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException4) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException5) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException6) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException7) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException8) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException9) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException10) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException11) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestMulMatrix, TestMulMatrixOperException12) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  s21_matrix_test_helper::FillMatrix(matrix1, 4.3);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

// good_test_funcMul

TEST(TestMulMatrix, TestMulMatrix1) {
  S21Matrix matrix1{95, 98};
  EXPECT_EQ(matrix1.get_rows(), 95);
  EXPECT_EQ(matrix1.get_cols(), 98);

  S21Matrix matrix2{98, 99};
  EXPECT_EQ(matrix2.get_rows(), 98);
  EXPECT_EQ(matrix2.get_cols(), 99);

  S21Matrix check_matrix{95, 99};
  EXPECT_EQ(check_matrix.get_rows(), 95);
  EXPECT_EQ(check_matrix.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 1.0);
  s21_matrix_test_helper::FillMatrix(check_matrix, 98.0);

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 95);
  EXPECT_EQ(matrix1.get_cols(), 99);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.get_rows(), 99);
  EXPECT_EQ(matrix1.get_cols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.get_rows(), 99);
  EXPECT_EQ(matrix2.get_cols(), 99);

  S21Matrix check_matrix{99, 99};
  EXPECT_EQ(check_matrix.get_rows(), 99);
  EXPECT_EQ(check_matrix.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 0.0);
  s21_matrix_test_helper::FillMatrix(check_matrix, 0.0);

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 99);
  EXPECT_EQ(matrix1.get_cols(), 99);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.get_rows(), 2);
  EXPECT_EQ(check_matrix.get_cols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 2;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 4;
  matrix2(1, 1) = 5;

  check_matrix(0, 0) = 10;
  check_matrix(0, 1) = 13;
  check_matrix(1, 0) = 22;
  check_matrix(1, 1) = 29;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix4) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.get_rows(), 4);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{3, 3};
  EXPECT_EQ(matrix2.get_rows(), 3);
  EXPECT_EQ(matrix2.get_cols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(check_matrix.get_rows(), 4);
  EXPECT_EQ(check_matrix.get_cols(), 3);

  matrix1(0, 0) = 1.5;
  matrix1(0, 1) = 2.5;
  matrix1(0, 2) = 3.5;
  matrix1(1, 0) = -1.5;
  matrix1(1, 1) = -2.5;
  matrix1(1, 2) = -3.5;
  matrix1(2, 0) = 0.0;
  matrix1(2, 1) = 0.0;
  matrix1(2, 2) = 0.0;
  matrix1(3, 0) = 1.0;
  matrix1(3, 1) = 1.0;
  matrix1(3, 2) = 1.0;

  matrix2(0, 0) = 0.0;
  matrix2(0, 1) = 1.0;
  matrix2(0, 2) = 2.0;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(1, 2) = 4.0;
  matrix2(2, 0) = -1.0;
  matrix2(2, 1) = -2.0;
  matrix2(2, 2) = 0.0;

  check_matrix(0, 0) = 4.0;
  check_matrix(0, 1) = -5.5;
  check_matrix(0, 2) = 13.0;
  check_matrix(1, 0) = -4.0;
  check_matrix(1, 1) = 5.5;
  check_matrix(1, 2) = -13.0;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 2.0;
  check_matrix(3, 1) = -1.0;
  check_matrix(3, 2) = 6.0;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 4);
  EXPECT_EQ(matrix1.get_cols(), 3);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix5) {
  S21Matrix matrix1{2, 3};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{3, 2};
  EXPECT_EQ(matrix2.get_rows(), 3);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.get_rows(), 2);
  EXPECT_EQ(check_matrix.get_cols(), 2);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;
  matrix1(0, 2) = -2.0;
  matrix1(1, 0) = 673.545453;
  matrix1(1, 1) = 14567.588;
  matrix1(1, 2) = 3.0;

  matrix2(0, 0) = 14567.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(2, 0) = 2.0;
  matrix2(2, 1) = -3.0;

  check_matrix(0, 0) = 212203743.411876;
  check_matrix(0, 1) = -66165978.696;
  check_matrix(1, 0) = 9855768.722667981;
  check_matrix(1, 1) = -3059252.447526;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix6) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  S21Matrix matrix2{1, 1};
  EXPECT_EQ(matrix2.get_rows(), 1);
  EXPECT_EQ(matrix2.get_cols(), 1);

  S21Matrix check_matrix{1, 1};
  EXPECT_EQ(check_matrix.get_rows(), 1);
  EXPECT_EQ(check_matrix.get_cols(), 1);

  matrix1(0, 0) = 1.456;

  matrix2(0, 0) = 12.987;

  check_matrix(0, 0) = 18.909072;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

// good_test_mulOperators_matrix

TEST(TestMulMatrix, TestMulMatrixOperator1) {
  S21Matrix matrix1{95, 98};
  EXPECT_EQ(matrix1.get_rows(), 95);
  EXPECT_EQ(matrix1.get_cols(), 98);

  S21Matrix matrix2{98, 99};
  EXPECT_EQ(matrix2.get_rows(), 98);
  EXPECT_EQ(matrix2.get_cols(), 99);

  S21Matrix check_matrix{95, 99};
  EXPECT_EQ(check_matrix.get_rows(), 95);
  EXPECT_EQ(check_matrix.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 1.0);
  s21_matrix_test_helper::FillMatrix(check_matrix, 98.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.get_rows(), 99);
  EXPECT_EQ(matrix1.get_cols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.get_rows(), 99);
  EXPECT_EQ(matrix2.get_cols(), 99);

  S21Matrix check_matrix{99, 99};
  EXPECT_EQ(check_matrix.get_rows(), 99);
  EXPECT_EQ(check_matrix.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 0.0);
  s21_matrix_test_helper::FillMatrix(check_matrix, 0.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.get_rows(), 2);
  EXPECT_EQ(check_matrix.get_cols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 2;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 4;
  matrix2(1, 1) = 5;

  check_matrix(0, 0) = 10;
  check_matrix(0, 1) = 13;
  check_matrix(1, 0) = 22;
  check_matrix(1, 1) = 29;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator4) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.get_rows(), 4);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{3, 3};
  EXPECT_EQ(matrix2.get_rows(), 3);
  EXPECT_EQ(matrix2.get_cols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(check_matrix.get_rows(), 4);
  EXPECT_EQ(check_matrix.get_cols(), 3);

  matrix1(0, 0) = 1.5;
  matrix1(0, 1) = 2.5;
  matrix1(0, 2) = 3.5;
  matrix1(1, 0) = -1.5;
  matrix1(1, 1) = -2.5;
  matrix1(1, 2) = -3.5;
  matrix1(2, 0) = 0.0;
  matrix1(2, 1) = 0.0;
  matrix1(2, 2) = 0.0;
  matrix1(3, 0) = 1.0;
  matrix1(3, 1) = 1.0;
  matrix1(3, 2) = 1.0;

  matrix2(0, 0) = 0.0;
  matrix2(0, 1) = 1.0;
  matrix2(0, 2) = 2.0;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(1, 2) = 4.0;
  matrix2(2, 0) = -1.0;
  matrix2(2, 1) = -2.0;
  matrix2(2, 2) = 0.0;

  check_matrix(0, 0) = 4.0;
  check_matrix(0, 1) = -5.5;
  check_matrix(0, 2) = 13.0;
  check_matrix(1, 0) = -4.0;
  check_matrix(1, 1) = 5.5;
  check_matrix(1, 2) = -13.0;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 2.0;
  check_matrix(3, 1) = -1.0;
  check_matrix(3, 2) = 6.0;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator5) {
  S21Matrix matrix1{2, 3};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{3, 2};
  EXPECT_EQ(matrix2.get_rows(), 3);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.get_rows(), 2);
  EXPECT_EQ(check_matrix.get_cols(), 2);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;
  matrix1(0, 2) = -2.0;
  matrix1(1, 0) = 673.545453;
  matrix1(1, 1) = 14567.588;
  matrix1(1, 2) = 3.0;

  matrix2(0, 0) = 14567.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(2, 0) = 2.0;
  matrix2(2, 1) = -3.0;

  check_matrix(0, 0) = 212203743.411876;
  check_matrix(0, 1) = -66165978.696;
  check_matrix(1, 0) = 9855768.722667981;
  check_matrix(1, 1) = -3059252.447526;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}