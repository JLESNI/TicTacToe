#include <iostream>
#include <string>
#include "grid.h"
#include "menu.h"
#include "pVp.h"
int main() {
    char TicTacToe[SIZE][SIZE];
    int coordinates[2];
    char player1 = 'X';
    char player2 = '0';
    int x;
    int y;
    ininializeGrid(TicTacToe);
    printf("Tic Tac Toe\n");

    int option = 0;
    do{
        menu();
        scanf("%d", &option);
        switch (option){

            case 0:
                break;

            case 1 :
                displayGrid(TicTacToe);
                printf("To select a cell, enter the row and column number in the following format: xy, e.g. 11\n");
                break;
            case 2:
                displayGrid(TicTacToe);
                playerMove(coordinates,x,y);
                break;
            case 3 : {
                printf("function unavailable\n");
                break;
            }
            default:
                printf("Choose a correct option \n");

        }
    }while (option != 0);
    printf("The End\n");


    return 0;
}



