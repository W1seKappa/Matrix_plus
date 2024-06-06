#include "./test.h"

TEST(TestInverse, TestInverseException1) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix1_bef = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix1_bef);
}

TEST(TestInverse, TestInverseException2) {
  S21Matrix matrix1{1, 7};
  S21Matrix matrix1_bef = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix1_bef);
}

TEST(TestInverse, TestInverseException3) {
  S21Matrix matrix1{20, 30};
  S21Matrix matrix1_bef = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix1_bef);
}

TEST(TestInverse, TestInverseDeterminantZero1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.get_cols(), 1);
  EXPECT_EQ(matrix1.get_rows(), 1);

  matrix1(0, 0) = 0.0;

  S21Matrix matrix_bef = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestInverse, TestInverseDeterminantZero2) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.get_cols(), 3);
  EXPECT_EQ(matrix1.get_rows(), 3);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 12;
  matrix1(0, 2) = 0.0;
  matrix1(1, 0) = 14;
  matrix1(1, 1) = 1.5;
  matrix1(1, 2) = 0.0;
  matrix1(2, 0) = 1.7;
  matrix1(2, 1) = 18;
  matrix1(2, 2) = 0.0;
  S21Matrix matrix_bef = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix_bef);
}

TEST(TestInverse, TestInverse1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.get_cols(), 1);
  EXPECT_EQ(matrix1.get_rows(), 1);

  matrix1(0, 0) = 1.5;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse2) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.get_cols(), 2);
  EXPECT_EQ(matrix1.get_rows(), 2);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(1, 0) = 1.3;
  matrix1(1, 1) = 1.4;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse3) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.get_cols(), 3);
  EXPECT_EQ(matrix1.get_rows(), 3);

  matrix1(0, 0) = -7.00037610391155;
  matrix1(1, 0) = -6.32839397341013;
  matrix1(2, 0) = 10.222164043691;
  matrix1(0, 1) = -9.82599597726949;
  matrix1(1, 1) = 3.03237457247451;
  matrix1(2, 1) = 0.587724786484614;
  matrix1(0, 2) = 8.27683520526625;
  matrix1(1, 2) = -4.28063526446931;
  matrix1(2, 2) = -6.93227237439714;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse4) {
  S21Matrix matrix1{4, 4};
  EXPECT_EQ(matrix1.get_cols(), 4);
  EXPECT_EQ(matrix1.get_rows(), 4);

  matrix1(0, 0) = -7.00037610391155;
  matrix1(1, 0) = -6.32839397341013;
  matrix1(2, 0) = 10.222164043691;
  matrix1(3, 0) = 7.95983747509308;
  matrix1(0, 1) = -9.82599597726949;
  matrix1(1, 1) = 3.03237457247451;
  matrix1(2, 1) = 0.587724786484614;
  matrix1(3, 1) = -3.41600720770657;
  matrix1(0, 2) = 8.27683520526625;
  matrix1(1, 2) = -4.28063526446931;
  matrix1(2, 2) = -6.93227237439714;
  matrix1(3, 2) = -10.6065054496285;
  matrix1(0, 3) = 0.586602877592668;
  matrix1(1, 3) = 10.6546861075331;
  matrix1(2, 3) = 4.33103069034405;
  matrix1(3, 3) = 8.75408579711802;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse5) {
  S21Matrix matrix1{7, 7};
  EXPECT_EQ(matrix1.get_cols(), 7);
  EXPECT_EQ(matrix1.get_rows(), 7);

  matrix1(0, 0) = 832;
  matrix1(0, 1) = -253;
  matrix1(0, 2) = -100;
  matrix1(0, 3) = -215;
  matrix1(0, 4) = -63;
  matrix1(0, 5) = -236;
  matrix1(0, 6) = -771;
  matrix1(1, 0) = 473;
  matrix1(1, 1) = 104;
  matrix1(1, 2) = -626;
  matrix1(1, 3) = 354;
  matrix1(1, 4) = -915;
  matrix1(1, 5) = -258;
  matrix1(1, 6) = -580;
  matrix1(2, 0) = -597;
  matrix1(2, 1) = 831;
  matrix1(2, 2) = -498;
  matrix1(2, 3) = -504;
  matrix1(2, 4) = 691;
  matrix1(2, 5) = 912;
  matrix1(2, 6) = -973;
  matrix1(3, 0) = 131;
  matrix1(3, 1) = -949;
  matrix1(3, 2) = -875;
  matrix1(3, 3) = 127;
  matrix1(3, 4) = -38;
  matrix1(3, 5) = -7;
  matrix1(3, 6) = 587;
  matrix1(4, 0) = 661;
  matrix1(4, 1) = 301;
  matrix1(4, 2) = -283;
  matrix1(4, 3) = -254;
  matrix1(4, 4) = -948;
  matrix1(4, 5) = -449;
  matrix1(4, 6) = 338;
  matrix1(5, 0) = -207;
  matrix1(5, 1) = -880;
  matrix1(5, 2) = -838;
  matrix1(5, 3) = 697;
  matrix1(5, 4) = 893;
  matrix1(5, 5) = -915;
  matrix1(5, 6) = -592;
  matrix1(6, 0) = 739;
  matrix1(6, 1) = 886;
  matrix1(6, 2) = 912;
  matrix1(6, 3) = 247;
  matrix1(6, 4) = -118;
  matrix1(6, 5) = -30;
  matrix1(6, 6) = -336;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse6) {
  S21Matrix matrix1{9, 9};
  EXPECT_EQ(matrix1.get_cols(), 9);
  EXPECT_EQ(matrix1.get_rows(), 9);

  matrix1(0, 0) = -929;
  matrix1(0, 1) = -332;
  matrix1(0, 2) = 313;
  matrix1(0, 3) = 190;
  matrix1(0, 4) = 287;
  matrix1(0, 5) = 44;
  matrix1(0, 6) = -468;
  matrix1(0, 7) = -381;
  matrix1(0, 8) = -397;
  matrix1(1, 0) = 961;
  matrix1(1, 1) = 371;
  matrix1(1, 2) = -532;
  matrix1(1, 3) = 842;
  matrix1(1, 4) = 87;
  matrix1(1, 5) = 92;
  matrix1(1, 6) = -40;
  matrix1(1, 7) = -356;
  matrix1(1, 8) = 822;
  matrix1(2, 0) = -469;
  matrix1(2, 1) = -55;
  matrix1(2, 2) = -426;
  matrix1(2, 3) = 282;
  matrix1(2, 4) = -706;
  matrix1(2, 5) = -270;
  matrix1(2, 6) = 912;
  matrix1(2, 7) = -823;
  matrix1(2, 8) = -769;
  matrix1(3, 0) = -612;
  matrix1(3, 1) = -924;
  matrix1(3, 2) = 327;
  matrix1(3, 3) = 454;
  matrix1(3, 4) = -29;
  matrix1(3, 5) = -366;
  matrix1(3, 6) = 724;
  matrix1(3, 7) = 775;
  matrix1(3, 8) = 897;
  matrix1(4, 0) = -775;
  matrix1(4, 1) = -36;
  matrix1(4, 2) = 9;
  matrix1(4, 3) = -955;
  matrix1(4, 4) = -289;
  matrix1(4, 5) = -594;
  matrix1(4, 6) = -735;
  matrix1(4, 7) = 475;
  matrix1(4, 8) = 993;
  matrix1(5, 0) = 89;
  matrix1(5, 1) = -156;
  matrix1(5, 2) = -834;
  matrix1(5, 3) = -102;
  matrix1(5, 4) = 465;
  matrix1(5, 5) = 626;
  matrix1(5, 6) = -649;
  matrix1(5, 7) = -828;
  matrix1(5, 8) = 248;
  matrix1(6, 0) = -660;
  matrix1(6, 1) = -400;
  matrix1(6, 2) = -30;
  matrix1(6, 3) = 740;
  matrix1(6, 4) = 374;
  matrix1(6, 5) = 473;
  matrix1(6, 6) = -654;
  matrix1(6, 7) = 684;
  matrix1(6, 8) = -153;
  matrix1(7, 0) = -374;
  matrix1(7, 1) = -892;
  matrix1(7, 2) = -316;
  matrix1(7, 3) = -811;
  matrix1(7, 4) = 789;
  matrix1(7, 5) = 222;
  matrix1(7, 6) = -985;
  matrix1(7, 7) = -248;
  matrix1(7, 8) = -440;
  matrix1(8, 0) = -869;
  matrix1(8, 1) = -758;
  matrix1(8, 2) = 332;
  matrix1(8, 3) = -572;
  matrix1(8, 4) = 105;
  matrix1(8, 5) = -548;
  matrix1(8, 6) = 925;
  matrix1(8, 7) = 137;
  matrix1(8, 8) = 739;

  s21_matrix_test_helper::TestInverse(matrix1);
}

TEST(TestInverse, TestInverse7) {
  TEST_TIMEOUT_BEGIN
  S21Matrix matrix1{11, 11};
  EXPECT_EQ(matrix1.get_cols(), 11);
  EXPECT_EQ(matrix1.get_rows(), 11);

  matrix1(0, 0) = 739;
  matrix1(0, 1) = -69;
  matrix1(0, 2) = -237;
  matrix1(0, 3) = -949;
  matrix1(0, 4) = -91;
  matrix1(0, 5) = -206;
  matrix1(0, 6) = -885;
  matrix1(0, 7) = 821;
  matrix1(0, 8) = 521;
  matrix1(0, 9) = 992;
  matrix1(0, 10) = 205;
  matrix1(1, 0) = 651;
  matrix1(1, 1) = -872;
  matrix1(1, 2) = 454;
  matrix1(1, 3) = -102;
  matrix1(1, 4) = -323;
  matrix1(1, 5) = 134;
  matrix1(1, 6) = 493;
  matrix1(1, 7) = 918;
  matrix1(1, 8) = -255;
  matrix1(1, 9) = 416;
  matrix1(1, 10) = 89;
  matrix1(2, 0) = -299;
  matrix1(2, 1) = 428;
  matrix1(2, 2) = 742;
  matrix1(2, 3) = -120;
  matrix1(2, 4) = 749;
  matrix1(2, 5) = 213;
  matrix1(2, 6) = 169;
  matrix1(2, 7) = 209;
  matrix1(2, 8) = 855;
  matrix1(2, 9) = 445;
  matrix1(2, 10) = -366;
  matrix1(3, 0) = -31;
  matrix1(3, 1) = -655;
  matrix1(3, 2) = 912;
  matrix1(3, 3) = 625;
  matrix1(3, 4) = 401;
  matrix1(3, 5) = -823;
  matrix1(3, 6) = 974;
  matrix1(3, 7) = 908;
  matrix1(3, 8) = 523;
  matrix1(3, 9) = 905;
  matrix1(3, 10) = -201;
  matrix1(4, 0) = -170;
  matrix1(4, 1) = 312;
  matrix1(4, 2) = -304;
  matrix1(4, 3) = 453;
  matrix1(4, 4) = 151;
  matrix1(4, 5) = 765;
  matrix1(4, 6) = 464;
  matrix1(4, 7) = 625;
  matrix1(4, 8) = 577;
  matrix1(4, 9) = -590;
  matrix1(4, 10) = -504;
  matrix1(5, 0) = 700;
  matrix1(5, 1) = 860;
  matrix1(5, 2) = -587;
  matrix1(5, 3) = 832;
  matrix1(5, 4) = -357;
  matrix1(5, 5) = -603;
  matrix1(5, 6) = 754;
  matrix1(5, 7) = 368;
  matrix1(5, 8) = -544;
  matrix1(5, 9) = 672;
  matrix1(5, 10) = 830;
  matrix1(6, 0) = -95;
  matrix1(6, 1) = 489;
  matrix1(6, 2) = -195;
  matrix1(6, 3) = -120;
  matrix1(6, 4) = -134;
  matrix1(6, 5) = 251;
  matrix1(6, 6) = 891;
  matrix1(6, 7) = 575;
  matrix1(6, 8) = -467;
  matrix1(6, 9) = -151;
  matrix1(6, 10) = -684;
  matrix1(7, 0) = 581;
  matrix1(7, 1) = -759;
  matrix1(7, 2) = 257;
  matrix1(7, 3) = -519;
  matrix1(7, 4) = 210;
  matrix1(7, 5) = 469;
  matrix1(7, 6) = -274;
  matrix1(7, 7) = 652;
  matrix1(7, 8) = 702;
  matrix1(7, 9) = -72;
  matrix1(7, 10) = 514;
  matrix1(8, 0) = 280;
  matrix1(8, 1) = -870;
  matrix1(8, 2) = -259;
  matrix1(8, 3) = 816;
  matrix1(8, 4) = 955;
  matrix1(8, 5) = 689;
  matrix1(8, 6) = -520;
  matrix1(8, 7) = 530;
  matrix1(8, 8) = -250;
  matrix1(8, 9) = 735;
  matrix1(8, 10) = -881;
  matrix1(9, 0) = 331;
  matrix1(9, 1) = -204;
  matrix1(9, 2) = -130;
  matrix1(9, 3) = -969;
  matrix1(9, 4) = 372;
  matrix1(9, 5) = -683;
  matrix1(9, 6) = 995;
  matrix1(9, 7) = 464;
  matrix1(9, 8) = -4;
  matrix1(9, 9) = -946;
  matrix1(9, 10) = -522;
  matrix1(10, 0) = 376;
  matrix1(10, 1) = -148;
  matrix1(10, 2) = 96;
  matrix1(10, 3) = -956;
  matrix1(10, 4) = -39;
  matrix1(10, 5) = 297;
  matrix1(10, 6) = -3;
  matrix1(10, 7) = -513;
  matrix1(10, 8) = 825;
  matrix1(10, 9) = 52;
  matrix1(10, 10) = 93;

  s21_matrix_test_helper::TestInverse(matrix1);
  TEST_TIMEOUT_END
}