#include "library.hpp"
int knight(char v[5], char board[9][9])
{
    int x1;
    int x2;
    if (v[0] == 97) {
        x1 = 1;
    } else if (v[0] == 98) {
        x1 = 2;
    } else if (v[0] == 99) {
        x1 = 3;
    } else if (v[0] == 100) {
        x1 = 4;
    } else if (v[0] == 101) {
        x1 = 5;
    } else if (v[0] == 102) {
        x1 = 6;
    } else if (v[0] == 103) {
        x1 = 7;
    } else if (v[0] == 104) {
        x1 = 8;
    }

    if (v[3] == 97) {
        x2 = 1;
    } else if (v[3] == 98) {
        x2 = 2;
    } else if (v[3] == 99) {
        x2 = 3;
    } else if (v[3] == 100) {
        x2 = 4;
    } else if (v[3] == 101) {
        x2 = 5;
    } else if (v[3] == 102) {
        x2 = 6;
    } else if (v[3] == 103) {
        x2 = 7;
    } else if (v[3] == 104) {
        x2 = 8;
    }
    char temp = board[56 - v[1]][9 - (104 - v[0] + 1)];
    if ((abs(x1 - x2) == 1 && abs(v[1] - v[4]) == 2)
        || ((abs(x1 - x2) == 2 && abs(v[1] - v[4]) == 1))) {
        board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
        board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
        display(board);
        return 0;
    } else {
        return 1;
    }
}