#include "library.hpp"

int bishop(char v[5],char board[9][9],int x1,int x2);
int king(char v[5],char board[9][9],int x1,int x2);
int knight(char v[5],char board[9][9],int x1,int x2);
int pawns(char v[5],char board[9][9]);
int queen(char v[5],char board[9][9],int x1,int x2);
int rook(char v[5],char board[9][9],int x1,int x2);

void move(char v[5], char board[9][9])
{
    char temp;
    temp = board[56 - v[1]][9 - (104 - v[0] + 1)];
    // cout << temp << endl;
    int x1;
    int x2;
    if (v[0] == 97) {
            x1 = 1;
    }
    else if (v[0] == 98) {
         x1 = 2;
    }
    else if (v[0] == 99) {
        x1 = 3;
    }
    else if (v[0] == 100) {
        x1 = 4;
    }
    else if (v[0] == 101) {
        x1 = 5;
    }
    else if (v[0] == 102) {
        x1 = 6;
    }
    else if (v[0] == 103) {
        x1 = 7;
    }
    else if (v[0] == 104) {
        x1 = 8;
    }

    if (v[3] == 97) {
        x2 = 1;
    }
    else if (v[3] == 98) {
        x2 = 2;
    }
    else if (v[3] == 99) {
        x2 = 3;
    }
    else if (v[3] == 100) {
        x2 = 4;
    }
    else if (v[3] == 101) {
        x2 = 5;
    }
    else if (v[3] == 102) {
        x2 = 6;
    }
    else if (v[3] == 103) {
        x2 = 7;
    }
    else if (v[3] == 104) {
        x2 = 8;
    }

    if (temp == 66 || temp == 98)
        bishop(v,board,x1,x2);
    else if (temp == 75 || temp == 107)
        king(v,board,x1,x2);
    else if (temp == 81 || temp == 113)
        knight(v,board,x1,x2);
    else if (temp == 80 || temp == 112)
        pawns(v,board);
    else if (temp == 81 || temp == 113)
        queen(v,board,x1,x2);
    else if (temp == 82 || temp == 114)
        rook(v,board,x1,x2);
    else {
        system("clear");
        exit(0);
    }
    
    // cout << x1 << " " << x2 << endl;
    // Ладья
    // if (temp == 82 || temp == 114) {
    //     if ((x1 != x2 && v[1] == v[4]) || (x1 == x2 && v[1] != v[4])) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         system("clear");
    //         exit(0);
    //     }
    // }
    // Король
    // else if (temp == 75 || temp == 107) {
    //     if (abs (x1 - x2) <= 1 && abs (v[1] - v[4]) <= 1) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         system("clear");
    //         exit(0);
    //     }
    // }
    // Слон
    // else if (temp == 66 || temp == 98) {
    //     if (abs (x1 - x2) == abs (v[1] - v[4])) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         system("clear");
    //         exit(0);
    //     }
    // }
    // Ферзь
    // else if (temp == 81 || temp == 113) {
    //     if (((x1 != x2 && v[1] == v[4]) || (x1 == x2 && v[1] != v[4])) || (abs (x1 - x2) == abs (v[1] - v[4]))) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         system("clear");
    //         exit(0);
    //     }
    // }
    // Конь
    // else if (temp == 81 || temp == 113) {
    //     if ((abs(x1 - x2) == 1 && abs(v[1] - v[4]) == 2) || ((abs(x1 - x2) == 2 && abs(v[1] - v[4]) == 1))) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         system("clear");
    //         exit(0);
    //     }
    // }
    // Пешка
    // else if (temp == 80 || temp == 112) {
    //     if ((v[1] == 2 && v[1] + 2 == v[4]) || (v[1] + 1 == v[4])) {
    //         board[56 - v[1]][9 - (104 - v[0] + 1)] = ' ';
    //         board[56 - v[4]][9 - (104 - v[3] + 1)] = temp;
    //         display(board);
    //     }
    //     else {
    //         // system("clear");
    //         exit(0);
    //     }
    // }
}