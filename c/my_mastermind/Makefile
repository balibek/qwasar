CC = gcc

CFLAGS = -g -Wall -Wextra -Werror -O0 -std=c99

LDFLAGS = -lm

SOURCES = my_mastermind.c my_functions.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = my_mastermind

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean

clean:
	@rm -f $(TARGET) $(OBJECTS) core