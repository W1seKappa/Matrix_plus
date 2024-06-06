CC = g++
CC_FLAGS = -std=c++17 -Wall -Wextra -Werror -g
GCOV_FLAGS = --coverage
OS = $(shell uname)
CHECK_FLAGS = -lgtest -pthread

TEST_COMPILE = $(CC) $(CC_FLAGS) ./test/*.cpp libs21_matrix.a $(CHECK_FLAGS)
TEST_COMPILE_GCOV = $(CC) $(CC_FLAGS) --coverage ./test/*.cpp libs21_matrix.a $(CHECK_FLAGS)
all: clean s21_matrix_oop.a

clean:
	rm -rf *.o *.g *.info *.out report *.a *.dSYM

re: clean all


s21_matrix_oop.a:
	$(CC) $(CC_FLAGS) -c s21_*.cpp
	ar rcs libs21_matrix.a *.o
	rm -rf *.o
	ranlib libs21_matrix.a

test: s21_matrix_oop.a
	$(TEST_COMPILE)
	./a.out

gcov_report:
	$(CC) $(CC_FLAGS) $(GCOV_FLAGS) -c s21_*.cpp
	ar rcs libs21_matrix.a *.o
	rm -rf *.o
	ranlib libs21_matrix.a
	$(TEST_COMPILE_GCOV)
	./a.out
	lcov -t a.out -o rep.info -c -d .
	genhtml -o report rep.info
	open ./report/index.html
	rm -rf *.gcda *.gcno

check: s21_matrix_oop.a
	clang-format -style=google -n s21_*.cpp *.h ./test/*.cpp ./test/*.h
	$(TEST_COMPILE)
ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./a.out
else
	valgrind --tool=memcheck --leak-check=yes  ./a.out
endif
	rm -rf *.o *.g *.info *.out report *.a *.dSYM *.gcda *.gcno
