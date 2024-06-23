#include <iostream>
#include "pVp.h"
void playerMove(int coordinates[2],int x,int y){

   int validMove=0;
    printf("Player %c, enter your move (x y): ");
    scanf("%d %d", &x, &y);
        if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
            validMove = 1;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
