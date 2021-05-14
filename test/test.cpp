#include "libchessviz/library.hpp"
#include "ctest.h"

int rook(char v[5], char board[9][9]);

CTEST(figure_test, rookc)
{
    const int expected = 0;
    char board[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}};
    char turn[6] = "a1-a3";
    const int result = rook(turn, board);
    ASSERT_EQUAL(expected, result);
}