#include "library.hpp"
int bishop(char v[5], char board[9][9], int x1, int x2)
{
    if (((x1 != x2 && v[1] == v[4]) || (x1 == x2 && v[1] != v[4])) || (abs (x1 - x2) == abs (v[1] - v[4]))) {
        board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
        board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
        display(board);
        return "g";
    }
    else {
        return "b";
    }
}