CC = gcc
CFLAGS = -Wall -Wextra -I590MakefileLab/headers
TARGET = fibonacci

.PHONY: all run clean

all: $(TARGET)

$(TARGET): 590MakefileLab/main.c 590MakefileLab/fibonacci.c 590MakefileLab/headers/fibonacci.h
	$(CC) $(CFLAGS) 590MakefileLab/main.c 590MakefileLab/fibonacci.c -o $(TARGET) -lm

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
