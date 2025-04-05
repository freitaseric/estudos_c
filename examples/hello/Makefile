CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = hello

all: $(TARGET)

$(TARGET): hello.c
	$(CC) $(CFLAGS) hello.c -o $(TARGET)
	@echo "$(TARGET) program successfully compiled!"

clean:
	@echo "Cleaning generated outputs..."
	rm -f $(TARGET)

.PHONY: all clean
