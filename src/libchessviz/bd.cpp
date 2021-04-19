#include "library.hpp"
void bd(char board[9][9])
{
    // char board[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = ' ';
    board[0][0] = '8';
    board[1][0] = '7';
    board[2][0] = '6';
    board[3][0] = '5';
    board[4][0] = '4';
    board[5][0] = '3';
    board[6][0] = '2';
    board[7][0] = '1';
    board[8][0] = ' ';

    board[8][0] = ' ';
    board[8][1] = 'A';
    board[8][2] = 'B';
    board[8][3] = 'C';
    board[8][4] = 'D';
    board[8][5] = 'E';
    board[8][6] = 'F';
    board[8][7] = 'G';
    board[8][8] = 'H';

    board[0][1] = 'r';
    board[0][8] = 'r';
    board[7][1] = 'R';
    board[7][8] = 'R';

    board[0][2] = 'n';
    board[0][7] = 'n';
    board[7][2] = 'N';
    board[7][7] = 'N';

    board[0][3] = 'b';
    board[0][6] = 'b';
    board[7][3] = 'B';
    board[7][6] = 'B';

    board[0][4] = 'q';
    board[7][4] = 'Q';

    board[0][5] = 'k';
    board[7][5] = 'K';

    for (int i = 1; i < n; i++) {
        board[1][i] = 'p';
        board[6][i] = 'P';
    }
}