#include <iostream>
#include "grid.h"

void ininializeGrid(char TicTacToe[SIZE][SIZE]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            TicTacToe[i][j] = '#';
        }}
    TicTacToe[0][0] = ' ';
    TicTacToe[2][0] = ' ';
    TicTacToe[4][0] = ' ';
    TicTacToe[0][0] = ' ';
    TicTacToe[2][0] = ' ';
    TicTacToe[4][0] = ' ';
    TicTacToe[0][2] = ' ';
    TicTacToe[2][2] = ' ';
    TicTacToe[4][2] = ' ';
    TicTacToe[0][2] = ' ';
    TicTacToe[2][2] = ' ';
    TicTacToe[4][2] = ' ';
    TicTacToe[0][0] = ' ';
    TicTacToe[2][4] = ' ';
    TicTacToe[4][4] = ' ';
    TicTacToe[0][4] = ' ';
    TicTacToe[5][4] = '3';
    TicTacToe[5][3] = ' ';
    TicTacToe[5][2] = '2';
    TicTacToe[5][1] = ' ';
    TicTacToe[5][0] = '1';
    TicTacToe[5][5] = ' ';
    TicTacToe[4][5] = '3';
    TicTacToe[3][5] = ' ';
    TicTacToe[2][5] = '2';
    TicTacToe[1][5] = ' ';
    TicTacToe[0][5] = '1';

}

void displayGrid(char TicTacToe[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", TicTacToe[i][j]);
        }
        printf("\n");
    }
}