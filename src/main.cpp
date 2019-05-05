#include "chessboard.h"
#include "chessgame.h"
#include "print_chess.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    char arr[8][8];
    chessboard(arr);
    printchess(arr);
    while (true) {
        chessgame(arr);
        printchess(arr);
    }
    return 0;
}
