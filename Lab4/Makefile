CC = gcc
CFLAGS = -Wall -Wextra -Iheaders
TARGET = test_fibonacci

.PHONY: all test clean

all: $(TARGET)

$(TARGET): test_fibonacci.c fibonacci.c headers/fibonacci.h headers/utest.h
	$(CC) $(CFLAGS) test_fibonacci.c fibonacci.c -o $(TARGET) -lm

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

