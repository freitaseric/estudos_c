CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = income

all: $(TARGET)

$(TARGET): income.c
	$(CC) $(CFLAGS) income.c -o $(TARGET)
	@echo "$(TARGET) program successfully compiled!"

clean:
	@echo "Cleaning generated outputs..."
	rm -f $(TARGET)

.PHONY: all clean
