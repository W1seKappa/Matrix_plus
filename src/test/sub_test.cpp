#include "./test.h"

TEST(TestSub, TestSubException1) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 5);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SubMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubException2) {
  S21Matrix matrix1(8, 8);
  S21Matrix matrix2(9, 8);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SubMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubException3) {
  S21Matrix matrix1(7, 6);
  S21Matrix matrix2(6, 6);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SubMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubException4) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 5);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SubMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubException5) {
  S21Matrix matrix1(8, 8);
  S21Matrix matrix2(9, 8);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SubMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubOperException1) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 5);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 - matrix2);
  EXPECT_ANY_THROW(matrix2 - matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubOperException2) {
  S21Matrix matrix1(8, 8);
  S21Matrix matrix2(9, 8);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 - matrix2);
  EXPECT_ANY_THROW(matrix2 - matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubOperException3) {
  S21Matrix matrix1(7, 6);
  S21Matrix matrix2(6, 6);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 - matrix2);
  EXPECT_ANY_THROW(matrix2 - matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubOperException4) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 5);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 - matrix2);
  EXPECT_ANY_THROW(matrix2 - matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubOperException5) {
  S21Matrix matrix1(8, 8);
  S21Matrix matrix2(9, 8);

  s21_matrix_test_helper::FillMatrix(matrix1, 1.0);
  s21_matrix_test_helper::FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;

  EXPECT_ANY_THROW(matrix1 - matrix2);
  EXPECT_ANY_THROW(matrix2 - matrix1);
  EXPECT_TRUE(matrix1 == matrix1_bef);
  EXPECT_TRUE(matrix2 == matrix2_bef);
}

TEST(TestSub, TestSubFunc1) {
  S21Matrix matrix1(80, 85);
  EXPECT_EQ(matrix1.get_rows(), 80);
  EXPECT_EQ(matrix1.get_cols(), 85);

  S21Matrix matrix2(80, 85);
  EXPECT_EQ(matrix2.get_rows(), 80);
  EXPECT_EQ(matrix2.get_cols(), 85);

  s21_matrix_test_helper::FillMatrix(matrix1, 2.5);
  s21_matrix_test_helper::FillMatrix(matrix2, 3.5);

  matrix1.SubMatrix(matrix2);
  s21_matrix_test_helper::CheckMatrix(matrix1, -1.0);

  matrix2.SubMatrix(matrix1);
  s21_matrix_test_helper::CheckMatrix(matrix2, 4.5);
}

TEST(TestSub, TestSubFunc2) {
  S21Matrix matrix1(80, 80);
  EXPECT_EQ(matrix1.get_rows(), 80);
  EXPECT_EQ(matrix1.get_cols(), 80);

  S21Matrix matrix2(80, 80);
  EXPECT_EQ(matrix2.get_rows(), 80);
  EXPECT_EQ(matrix2.get_cols(), 80);

  s21_matrix_test_helper::FillMatrix(matrix1, 5.5);
  s21_matrix_test_helper::FillMatrix(matrix2, 9.5);

  matrix1.SubMatrix(matrix2);
  s21_matrix_test_helper::CheckMatrix(matrix1, -4.0);

  matrix2.SubMatrix(matrix1);
  s21_matrix_test_helper::CheckMatrix(matrix2, 13.5);
}

TEST(TestSub, TestSubFunc3) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.get_rows(), 4);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{4, 3};
  EXPECT_EQ(matrix2.get_rows(), 4);
  EXPECT_EQ(matrix2.get_cols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(matrix2.get_rows(), 4);
  EXPECT_EQ(matrix2.get_cols(), 3);

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
  matrix2(3, 0) = -3.0;
  matrix2(3, 1) = 0.0;
  matrix2(3, 2) = 4.0;

  check_matrix(0, 0) = 1.5;
  check_matrix(0, 1) = 1.5;
  check_matrix(0, 2) = 1.5;
  check_matrix(1, 0) = -4.5;
  check_matrix(1, 1) = -2.5;
  check_matrix(1, 2) = -7.5;
  check_matrix(2, 0) = 1.0;
  check_matrix(2, 1) = 2.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 4.0;
  check_matrix(3, 1) = 1.0;
  check_matrix(3, 2) = -3.0;

  matrix1.SubMatrix(matrix2);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestSub, TestSubFunc4) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  matrix1(0, 0) = 145678000.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = 673552.54545324;
  matrix1(1, 1) = 145678000.588;

  matrix2(0, 0) = 14567800.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;

  check_matrix(0, 0) = 131110199.811;
  check_matrix(0, 1) = 0.0;
  check_matrix(1, 0) = 673549.54545324;
  check_matrix(1, 1) = 145678000.588;

  matrix1.SubMatrix(matrix2);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestSub, TestSubOper1) {
  S21Matrix matrix1(80, 85);
  EXPECT_EQ(matrix1.get_rows(), 80);
  EXPECT_EQ(matrix1.get_cols(), 85);

  S21Matrix matrix2(80, 85);
  EXPECT_EQ(matrix2.get_rows(), 80);
  EXPECT_EQ(matrix2.get_cols(), 85);

  s21_matrix_test_helper::FillMatrix(matrix1, 2.5);
  s21_matrix_test_helper::FillMatrix(matrix2, 3.5);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;
  S21Matrix result = matrix1 - matrix2;

  EXPECT_EQ(result.get_rows(), 80);
  EXPECT_EQ(result.get_cols(), 85);
  s21_matrix_test_helper::CheckMatrix(result, -1.0);
  EXPECT_TRUE(matrix1_bef == matrix1);
  EXPECT_TRUE(matrix2_bef == matrix2);
}

TEST(TestSub, TestSubOper2) {
  S21Matrix matrix1(85, 85);
  EXPECT_EQ(matrix1.get_rows(), 85);
  EXPECT_EQ(matrix1.get_cols(), 85);

  S21Matrix matrix2(85, 85);
  EXPECT_EQ(matrix2.get_rows(), 85);
  EXPECT_EQ(matrix2.get_cols(), 85);

  s21_matrix_test_helper::FillMatrix(matrix1, 2.5);
  s21_matrix_test_helper::FillMatrix(matrix2, 4.5);

  S21Matrix matrix1_bef = matrix1;
  S21Matrix matrix2_bef = matrix2;
  S21Matrix result = matrix1 - matrix2;

  EXPECT_EQ(result.get_rows(), 85);
  EXPECT_EQ(result.get_cols(), 85);
  s21_matrix_test_helper::CheckMatrix(result, -2.0);
  EXPECT_TRUE(matrix1_bef == matrix1);
  EXPECT_TRUE(matrix2_bef == matrix2);
}

TEST(TestSub, TestSubOper3) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.get_rows(), 4);
  EXPECT_EQ(matrix1.get_cols(), 3);

  S21Matrix matrix2{4, 3};
  EXPECT_EQ(matrix2.get_rows(), 4);
  EXPECT_EQ(matrix2.get_cols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(matrix2.get_rows(), 4);
  EXPECT_EQ(matrix2.get_cols(), 3);

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
  matrix2(3, 0) = -3.0;
  matrix2(3, 1) = 0.0;
  matrix2(3, 2) = 4.0;

  check_matrix(0, 0) = 1.5;
  check_matrix(0, 1) = 1.5;
  check_matrix(0, 2) = 1.5;
  check_matrix(1, 0) = -4.5;
  check_matrix(1, 1) = -2.5;
  check_matrix(1, 2) = -7.5;
  check_matrix(2, 0) = 1.0;
  check_matrix(2, 1) = 2.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 4.0;
  check_matrix(3, 1) = 1.0;
  check_matrix(3, 2) = -3.0;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 - matrix2;

  EXPECT_EQ(result.get_rows(), 4);
  EXPECT_EQ(result.get_cols(), 3);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSub, TestSubOper4) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(matrix2.get_rows(), 2);
  EXPECT_EQ(matrix2.get_cols(), 2);

  matrix1(0, 0) = 145678000.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = 673552.54545324;
  matrix1(1, 1) = 145678000.588;

  matrix2(0, 0) = 14567800.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;

  check_matrix(0, 0) = 131110199.811;
  check_matrix(0, 1) = 0.0;
  check_matrix(1, 0) = 673549.54545324;
  check_matrix(1, 1) = 145678000.588;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 - matrix2;

  EXPECT_EQ(result.get_rows(), 2);
  EXPECT_EQ(result.get_cols(), 2);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSub, TestSubOper5) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.get_rows(), 95);
  EXPECT_EQ(matrix1.get_cols(), 99);

  S21Matrix matrix2{95, 99};
  EXPECT_EQ(matrix2.get_rows(), 95);
  EXPECT_EQ(matrix2.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 2.5);
  s21_matrix_test_helper::FillMatrix(matrix2, 3.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result{95, 99};

  result -= matrix1;

  EXPECT_EQ(result.get_rows(), 95);
  EXPECT_EQ(result.get_cols(), 99);
  s21_matrix_test_helper::CheckMatrix(result, -2.5);

  result -= matrix2;

  EXPECT_EQ(result.get_rows(), 95);
  EXPECT_EQ(result.get_cols(), 99);
  s21_matrix_test_helper::CheckMatrix(result, -6.0);

  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSub, TestSubOper6) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.get_rows(), 99);
  EXPECT_EQ(matrix1.get_cols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.get_rows(), 99);
  EXPECT_EQ(matrix2.get_cols(), 99);

  s21_matrix_test_helper::FillMatrix(matrix1, 2.5);
  s21_matrix_test_helper::FillMatrix(matrix2, -3.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result{99, 99};

  result -= matrix1;

  EXPECT_EQ(result.get_rows(), 99);
  EXPECT_EQ(result.get_cols(), 99);
  s21_matrix_test_helper::CheckMatrix(result, -2.5);

  result -= matrix2;

  EXPECT_EQ(result.get_rows(), 99);
  EXPECT_EQ(result.get_cols(), 99);
  s21_matrix_test_helper::CheckMatrix(result, 1.0);

  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}