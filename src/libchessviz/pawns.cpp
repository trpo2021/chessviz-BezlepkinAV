#include "library.hpp"
int bishop(char v[5], char board[9][9])
{
    char temp = board[56 - v[1]][9 - (104 - v[0] + 1)];
    if ((v[1] == 2 && v[1] + 2 == v[4]) || (v[1] + 1 == v[4])) {
        board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
        board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
        display(board);
        return 1;
    }
    else {
        return 2;
    }
}