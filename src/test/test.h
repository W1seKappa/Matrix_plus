#ifndef CPP1_S21MATRIX_OOP_TEST_H
#define CPP1_S21MATRIX_OOP_TEST_H
#include <gtest/gtest.h>

#include "./../s21_matrix_oop.h"
#include "./test_helper_classes.h"
#define _GTEST_TIMEOUT 1

#include "./../s21_matrix_oop.h"
#include "./test_helper_classes.h"

#if (_GTEST_TIMEOUT == 1)
#define TEST_TIMEOUT_BEGIN if (1) {
#define TEST_TIMEOUT_END }
#else
#define TEST_TIMEOUT_BEGIN if (0) {
#define TEST_TIMEOUT_END }
#endif
#endif