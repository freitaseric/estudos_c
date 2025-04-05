CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = sum

all: $(TARGET)

$(TARGET): sum.c
	$(CC) $(CFLAGS) sum.c -o $(TARGET)
	@echo "$(TARGET) program successfully compiled!"

clean:
	@echo "Cleaning generated outputs..."
	rm -f $(TARGET)

.PHONY: all clean
