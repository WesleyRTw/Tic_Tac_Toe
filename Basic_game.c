#include <stdio.h>

// Function that initializes the matrix with empty spaces and prints it on the screen
void initializeBoard(char board[3][3]) { 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
            printf("|%c", board[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    
    char board[3][3]; // Matrix that representing the board
    int options; //

    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("+-+-+-+-+| WELCOME TO TIC TAC TOE! |+-+-+-+-+\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("+-+-+-+-+-+-+-| 1 >>PLAY<< 1 |-+-+-+-+-+-+-+-\n");
    printf("+-+-+-+-+-+-+-| 2 >>EXIT<< 2 |-+-+-+-+-+-+-+-\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("Enter how you wish to proceed: ");
    scanf("%d", &options);

    if (options == 1){
        initializeBoard(board);
    } else if (options == 2){
        printf("Closing the menu...");
    } else{
        printf("Invalid response!");
    }

    return 0;
    
}