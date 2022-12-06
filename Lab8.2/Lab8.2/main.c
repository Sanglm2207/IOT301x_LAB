//
//  main.c
//  Lab8.2
//
//  Created by Lại Minh Sáng on 07/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curses.h>

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choise, player;

int checkForWin(void);
void displayBoard(void);
void mardBoard(char mark);


int main() {
    int gameStatus;
    char mark;
    player = 1;
    
    do {
        displayBoard();
        player = (player % 2) ? 1 : 2;
        
        printf("Player %d, Enter a number: ", player);
        scanf("%d", &choise);
        
        mark = (player == 1) ? 'X' : 'O';
        
        mardBoard(mark);
        
        gameStatus = checkForWin();
        
        player++;
        
    } while (gameStatus == -1);
    
    if (gameStatus == 1) {
        printf("==>\aPlayer %d win ", --player);
    } else {
        printf("==>\aGame draw");
    }
    
    return 0;
}
/********************************************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
0 GAME IS OVER AND NO RESULT
**************************************************************************************/

int checkForWin() {
    int returnValue = 0;
    if (square[1] == square[2] && square[2] == square[3]) {
        returnValue = 1;
    } else if (square[4] == square[5] && square[5] == square[6]) {
        returnValue = 1;
    } else if (square[7] == square[8] && square[8] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[4] && square[4] == square[7]) {
        returnValue = 1;
    } else if (square[2] == square[5] && square[5] == square[8]) {
        returnValue = 1;
    } else if (square[3] == square[6] && square[6] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[5] && square[5] == square[9]) {
        returnValue = 1;
    } else if (square[3] == square[5] && square[5] == square[7]) {
        returnValue = 1;
    } else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
               square[4] != '4' && square[5] != '5' && square[6] != '6' &&
               square[7] != '7' && square[8] != '8' && square[9] != '9') {
        returnValue = 0;
    } else {
        returnValue = -1;
    }
    return returnValue;
}

void displayBoard() {
    system("cls");
    
    printf("Player 1 (X) - Player 2 (O) \n\n\n");
    
    
    printf("       |        |        \n");
    printf("  %c    |   %c    |   %c   \n", square[1], square[2], square[3]);
    
    printf("       |        |        \n");
    printf("       |        |        \n");
    
    printf("  %c    |   %c    |   %c   \n", square[4], square[5], square[6]);
    
    printf("       |        |        \n");
    printf("       |        |        \n");
    
    printf("  %c    |   %c    |   %c   \n", square[7], square[8], square[9]);
    
    printf("       |        |        \n");
}

void mardBoard(char mark) {
    if (choise == 1 && square[1] == '1') {
        square[1] = mark;
    } else if (choise == 2 && square[2] == '2') {
        square[2] = mark;
    } else if (choise == 3 && square[3] == '3') {
        square[3] = mark;
    } else if (choise == 4 && square[4] == '4') {
        square[4] = mark;
    } else if (choise == 5 && square[5] == '5') {
        square[5] = mark;
    } else if (choise == 6 && square[6] == '6') {
        square[6] = mark;
    } else if (choise == 7 && square[7] == '7') {
        square[7] = mark;
    } else if (choise == 8 && square[8] == '8') {
        square[8] = mark;
    } else if (choise == 9 && square[9] == '9') {
        square[9] = mark;
    } else {
        printf("Invalid move ");
        player--;
        getch();
    }
}
