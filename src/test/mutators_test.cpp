#include "./test.h"

// exception_tests

TEST(TestMutators, TestMutatorsException1) {
  S21Matrix matrix_test(2, 3);
  S21Matrix matrix_before = matrix_test;

  EXPECT_ANY_THROW(matrix_test.set_rows(-1));
  EXPECT_TRUE(matrix_test == matrix_before);
}

TEST(TestMutators, TestMutatorsException2) {
  S21Matrix matrix_test(4, 2);
  S21Matrix matrix_before = matrix_test;

  EXPECT_ANY_THROW(matrix_test.set_rows(-1));
  EXPECT_TRUE(matrix_test == matrix_before);
}

TEST(TestMutators, TestMutatorsException3) {
  S21Matrix matrix_test(8, 9);
  S21Matrix matrix_before = matrix_test;

  EXPECT_ANY_THROW(matrix_test.set_cols(-1));
  EXPECT_TRUE(matrix_test == matrix_before);
}

TEST(TestMutators, TestMutatorsException4) {
  S21Matrix matrix_test(10, 9);
  S21Matrix matrix_before = matrix_test;

  EXPECT_ANY_THROW(matrix_test.set_cols(-1));
  EXPECT_TRUE(matrix_test == matrix_before);
}

// test_good

TEST(TestMutators, TestMutators1) {
  S21Matrix matrix1(1, 1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  s21_matrix_test_helper::FillMatrix(matrix1, 5.5);
  matrix1.set_rows(2);
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, s21_matrix_test_helper::Epsilon);
  EXPECT_NEAR(matrix1(1, 0), 0.0, s21_matrix_test_helper::Epsilon);
}

TEST(TestMutators, TestMutators2) {
  S21Matrix matrix1(1, 1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  s21_matrix_test_helper::FillMatrix(matrix1, 5.5);
  matrix1.set_cols(2);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 5.5, s21_matrix_test_helper::Epsilon);
  EXPECT_NEAR(matrix1(0, 1), 0.0, s21_matrix_test_helper::Epsilon);
}

TEST(TestMutators, TestMutators3) {
  S21Matrix matrix1(1, 1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  s21_matrix_test_helper::FillMatrix(matrix1, 5.5);
  matrix1.set_rows(1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, s21_matrix_test_helper::Epsilon);
}

TEST(TestMutators, TestMutator4) {
  S21Matrix matrix1(1, 1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  s21_matrix_test_helper::FillMatrix(matrix1, 5.5);
  matrix1.set_cols(1);
  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, s21_matrix_test_helper::Epsilon);
}

TEST(TestMutators, TestMutators5) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_rows(), 2);
  EXPECT_EQ(matrix1.get_cols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix1.set_rows(1);

  EXPECT_EQ(matrix1.get_rows(), 1);
  EXPECT_EQ(matrix1.get_cols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 1, s21_matrix_test_helper::Epsilon);
  EXPECT_NEAR(matrix1(0, 1), 2, s21_matrix_test_helper::Epsilon);
}
