CFLAGS = -Wall -Werror
CC = gcc
OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD = mkdir -p build/src

.PHONY: clean test

default: bin/chessviz.exe

test: bin/chess_test.exe
	$<

bin/chess_test.exe: build/test/main_test.o build/src/board_print_plain.o build/src/board_game.o build/src/board.o build/src/board_read.o
	mkdir -p bin
	$(CC) $^ -o $@ $(CFLAGS)

build/test/main_test.o: test/main.c thirdparty/ctest.h src/board.h
	mkdir -p build/test
	$(OBJ) -I thirdparty -I src

bin/chessviz.exe: build/src/main.o build/src/board_print_plain.o build/src/board_game.o build/src/board.o build/src/board_read.o
	mkdir -p bin
	$(CC) $^ -o $@ $(CFLAGS)

build/src/main.o: src/main.c
	$(MKDIR_BUILD)
	$(OBJ)

build/src/board_print_plain.o: src/board_print_plain.c src/board_print_plain.h
	$(MKDIR_BUILD)
	$(OBJ)

build/src/board_game.o: src/board_game.c src/board_game.h
	$(MKDIR_BUILD)
	$(OBJ)

build/src/board.o: src/board.c src/board.h
	$(MKDIR_BUILD)
	$(OBJ)

build/src/board_read.o: src/board_read.c src/board_read.h
	$(MKDIR_BUILD)
	$(OBJ)

clean:
	rm -rf build bin
