#include "library.hpp"
void move(char v[5], char board[9][9])
{
    char temp;
    temp = board[56-v[1]][9-(104-v[0]+1)];
    board[56-v[1]][9-(104-v[0]+1)] = ' ';
    board[56-v[4]][9-(104-v[3]+1)] = temp;
    display(board);
}