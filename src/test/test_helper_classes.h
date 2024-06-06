#ifndef CPP1_S21_MATRIX_OOP_HELP_CLASSES_H
#define CPP1_S21_MATRIX_OOP_HELP_CLASSES_H

#include "./../s21_matrix_oop.h"

namespace s21_matrix_test_helper {

constexpr double Epsilon = 1e-7;
constexpr int RandomTestNum = 40;
constexpr int RandomMatrixMaxSize = 20;

S21Matrix MoveConstructorTest(S21Matrix test);
void PrintTest(const S21Matrix& matrix);
void Print(const S21Matrix& matrix);
int GetRandInt(int min, int max);
double GetRandDouble(double min, double max);
S21Matrix GetRandMatrix(int rows, int cols, double min, double max);
void FillMatrix(S21Matrix& matrix, double val);
void CheckMatrix(const S21Matrix& matrix, double val);
S21Matrix GetIdenticMatrix(int size);
void TestInverse(const S21Matrix& matrix);
}  // namespace s21_matrix_test_helper
#endif