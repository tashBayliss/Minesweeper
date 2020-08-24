#include <stdio.h>
#include <stdlib.h>

#define BOARD 5

void RedrawBoard (int board[BOARD][BOARD]) {
    system("clear");

    for (int x=0; x<BOARD; x++) {
        for (int y=0; y<BOARD; y++){
            printf("%d ", board[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

void PrintBoard() {
    system("clear");

    for (int i=0; i<BOARD; i++) {
        for (int j=0; j<BOARD; j++){
            //printf("%d ", board[i][j]);
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}


int main () {
    int x, y;
    int temp;

    int board[BOARD][BOARD] = {};
    PrintBoard();

    while (1) {
        printf("press 1 to view, 0 to hide: ");
        scanf("%d", &temp);

        if (temp == 1) {
            RedrawBoard(board);
        }

        else if (temp == 0) {
            PrintBoard();
        }

        else {
            printf("invalid option\n");
            printf("press 1 to view, 0 to hide: ");
            scanf("%d", &temp);
        }

    }

    return 0;
}