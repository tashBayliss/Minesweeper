// TO DO
// in array store -2 for mines, -1 for hidden tiles, numbers for surrounding

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOARD 9
#define MINES 5

#define HIDDEN -1
#define MINE -2

int createMines(int board[BOARD][BOARD]) {
    for (int i=0; i<MINES; i++) {
        int randRow = rand() % BOARD + 1;
        int randCol = rand() % BOARD + 1;
        
        while (board[randRow][randCol] == 1) {
            randRow = rand() % (BOARD);
            randCol = rand() % (BOARD);
        }

        board[randRow][randCol] = 1;
    }

    return 0;
}

void reveal (int board [BOARD][BOARD], int row, int col) {

}

void ShowBoard (int board[BOARD][BOARD]) {
    system("clear");

    printf("  ");

    for (int i = 1; i<=BOARD; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (int x=0; x<BOARD; x++) {
        printf("%d ", x+1);
        for (int y=0; y<BOARD; y++){
            if (board[x][y] == 0) {
                printf(" ");
            }
            else if (board[x][y] == 1){
                printf("X");
            }
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

int main () {
    int row, col;
    int temp;

    int board[BOARD][BOARD] = {};
    PrintBoard();
    createMines(board);

    while (1) {
        printf("Enter a row: ");
        scanf("%d", &row);

        printf("Enter a column: ");
        scanf("%d", &col);

        ShowBoard(board);
    }

    return 0;
}