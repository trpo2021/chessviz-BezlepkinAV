#include "libchessviz/library.hpp"

void display(char board[9][9]);

int main()
{
    char board[9][9];
    bd(board);
    display(board);
    cout << endl;
    char v[5];
    while (cin >> v) {
        if (strcmp(v, "quit") == 0) {
             cout << endl;
             break;
         }
        move(v, board);
        cout << endl;
    }
    return 0;
}