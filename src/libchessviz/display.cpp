#include "library.hpp"
void display(char board[9][9])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << ' ';
        cout <<endl;
    }
}