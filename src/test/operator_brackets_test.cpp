#include "./test.h"

TEST(TestOperatorBrackets, TestOperBracketsException1) {
  S21Matrix matrix_check(99, 99);
  EXPECT_ANY_THROW(matrix_check(100, 99));
  s21_matrix_test_helper::CheckMatrix(matrix_check, 0.0);
}

TEST(TestOperatorBrackets, TestOperBracketsException2) {
  S21Matrix matrix_check(99, 99);
  EXPECT_ANY_THROW(matrix_check(99, 100));
  s21_matrix_test_helper::CheckMatrix(matrix_check, 0.0);
}

TEST(TestOperatorBrackets, TestOperBracketsException3) {
  S21Matrix matrix_check(99, 99);
  EXPECT_ANY_THROW(matrix_check(100, 100));
  s21_matrix_test_helper::CheckMatrix(matrix_check, 0.0);
}

TEST(TestOperatorBrackets, TestOperBracketsException4) {
  S21Matrix matrix_check(5, 5);
  s21_matrix_test_helper::FillMatrix(matrix_check, 2.0);
  EXPECT_ANY_THROW(matrix_check(6, 5));
  s21_matrix_test_helper::CheckMatrix(matrix_check, 2.0);
}

TEST(TestOperatorBrackets, TestOperBracketsException5) {
  S21Matrix matrix_check(5, 6);
  s21_matrix_test_helper::FillMatrix(matrix_check, 2.0);
  EXPECT_ANY_THROW(matrix_check(-99, -99));
  s21_matrix_test_helper::CheckMatrix(matrix_check, 2.0);
}

TEST(TestOperatorBrackets, TestOperatorBrackets1) {
  S21Matrix matrix_check{3, 3};
  EXPECT_EQ(matrix_check.get_rows(), 3);
  EXPECT_EQ(matrix_check.get_cols(), 3);

  ASSERT_NEAR(matrix_check(0, 0), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(0, 1), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(0, 2), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 0), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 1), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 2), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 0), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 1), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 2), 0.0, s21_matrix_test_helper::Epsilon);

  matrix_check(0, 0) = 1.0;
  matrix_check(0, 1) = 2.0;
  matrix_check(1, 0) = 3.0;
  matrix_check(1, 1) = 4.0;

  ASSERT_NEAR(matrix_check(0, 0), 1.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(0, 1), 2.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(0, 2), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 0), 3.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 1), 4.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(1, 2), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 0), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 1), 0.0, s21_matrix_test_helper::Epsilon);
  ASSERT_NEAR(matrix_check(2, 2), 0.0, s21_matrix_test_helper::Epsilon);
}
