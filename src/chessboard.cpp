#include "chessboard.h"
void chessboard(char arr[][8])
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            arr[i][j] = ' ';
        }
    }

    // arrlackfigure
    arr[0][0] = 'r';
    arr[0][1] = 'n';
    arr[0][2] = 'b';
    arr[0][3] = 'q';
    arr[0][4] = 'k';
    arr[0][5] = 'b';
    arr[0][6] = 'n';
    arr[0][7] = 'r';

    arr[1][0] = 'p';
    arr[1][1] = 'p';
    arr[1][2] = 'p';
    arr[1][3] = 'p';
    arr[1][4] = 'p';
    arr[1][5] = 'p';
    arr[1][6] = 'p';
    arr[1][7] = 'p';
    // whitefigure
    arr[7][0] = 'R';
    arr[7][1] = 'N';
    arr[7][2] = 'B';
    arr[7][3] = 'Q';
    arr[7][4] = 'K';
    arr[7][5] = 'B';
    arr[7][6] = 'N';
    arr[7][7] = 'R';

    arr[6][0] = 'P';
    arr[6][1] = 'P';
    arr[6][2] = 'P';
    arr[6][3] = 'P';
    arr[6][4] = 'P';
    arr[6][5] = 'P';
    arr[6][6] = 'P';
    arr[6][7] = 'P';
}
