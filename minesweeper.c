#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOARD 9
#define MINES 5

int createMines(int board[BOARD][BOARD]) {
    int random = rand() % (BOARD*BOARD);
    printf("%d\n", random);

    for (int i=1; i<MINES; i++) {
        int random = rand() % (BOARD*BOARD);
        printf("%d\n", random);
        
    }

    return 0;
}

void RedrawBoard (int board[BOARD][BOARD]) {
    system("clear");

    printf("  ");

    for (int i = 1; i<=BOARD; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (int x=0; x<BOARD; x++) {
        printf("%d ", x+1);
        for (int y=0; y<BOARD; y++){
            printf("%d ", board[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

void PrintBoard() {
    system("clear");

    printf("  ");
    for (int i = 1; i<=BOARD; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (int x=0; x<BOARD; x++) {
        printf("%d ", x+1);
        for (int y=0; y<BOARD; y++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

bool isMine(int row, int col, int board[BOARD][BOARD]) { 
    if (board[row][col] == "X"){
        return true;
    }

    else {
        return false;
    }
}

int main () {
    int row, col;
    int temp;

    int board[BOARD][BOARD] = {};
    PrintBoard();
    createMines(board[BOARD][BOARD]);

    while (1) {
        printf("Enter a row: ");
        scanf("%d", &row);

        printf("Enter a column: ");
        scanf("%d", &col);

        RedrawBoard(board);
    }

    return 0;
}