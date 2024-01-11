PROJECTNAME=s21_string
CC = gcc
CFLAGS = -Wall -Werror -Wextra 
SOURCES=$(wildcard s21_*.c)
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))# allows change initial string to provided

ifeq ($(shell uname -s),Linux)
LIBS=-lcheck -lsubunit -lm -lrt -lpthread -lgcov
LEAKS=valgrind --tool=memcheck --leak-check=yes
endif
ifeq ($(shell uname -s),Darwin) # MacOS
LIBS=-lcheck -lm -lpthread -lgcov
LEAKS=leaks -atExit --
endif

all: $(PROJECTNAME).a test gcov_report 

$(PROJECTNAME).a:
	$(CC) $(CFLAGS) -c $(SOURCES) -lm
	ar -rcs $@ $(OBJECTS)
	rm -rf *.o

test: $(PROJECTNAME).a
	$(CC) $(CFLAGS)  unit_test/unit_tests.c -L. $(PROJECTNAME).a $(LIBS) -o test_function
	$(LEAKS) ./test_function
	rm -f test_function
	$(CC) $(CFLAGS) test/*.c -L. $(PROJECTNAME).a $(LIBS) -o sprintf
	$(LEAKS) ./sprintf
	rm -f sprintf

gcov_report: clean $(PROJECTNAME).a
	$(CC) $(CFLAGS) unit_test/unit_tests.c -L. $(PROJECTNAME).a $(LIBS) --coverage -o checks
	./checks
	lcov -t "report" -o report.info -c -d .
	genhtml -o reports report.info
	open reports/index.html
	rm -rf checks

clean:
	rm -rf *.gcda *.gcov *.gcno reports *.info *.o

check:
	cppcheck --enable=all --suppress=missingIncludeSystem ./
	clang-format -n -style=Google *.c *.h test/*.c test/*.h unit_test/*.c

format:
	clang-format -i -style=Google *.c *.h test/*.c test/*.h unit_test/*.c

rebuild:
	make -B	

mini_verter:
	cd ../materials/build && sh run.sh

.PHONY: test
