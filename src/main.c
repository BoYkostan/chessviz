#include "board_game.h"
#include "board_print_plain.h"
#include "board.h"
int main() {
    char deck[8][8];
    board_game(deck);
    while(1) {
        board_print_plain(deck);
        board(deck);
    }
}
