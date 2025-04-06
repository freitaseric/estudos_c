CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = exec

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)
	@echo "$(TARGET) program successfully compiled!"

clean:
	@echo "Cleaning generated outputs..."
	rm -f $(TARGET)

.PHONY: all clean
