CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../../c_libs/include
LDFLAGS = -lcmocka
SRC = ../../c_libs/include/swap.c \
	  ../../c_libs/include/vector.c \
      ../../c_libs/include/data_structure.c  \
      ../../c_libs/include/print.c  \
	  ../../c_libs/test/test_swap.c  \
	  ../../c_libs/test/test_vector.c  \
	  ../../c_libs/test/unit_test.c
OBJ = $(SRC:.c=.o)
VALGRIND_FLAGS = --leak-check=full --show-leak-kinds=all

.PHONY: all clean

all: grind

grind: $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o ../../c_libs/build/test/$@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run_tests: grind
	valgrind $(VALGRIND_FLAGS) ../../c_libs/build/test/grind

clean:
	rm -f $(OBJ) ../../c_libs/build/test/grind

