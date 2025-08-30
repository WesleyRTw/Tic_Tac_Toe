#include <stdio.h>

// Function that initializes the matrix with empty spaces and prints it on the screen
void initializeBoard(char board[3][3]) { 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}
// Function to print the Tic-Tac-Toe board to the screen, still empty
void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("|%c", board[i][j]);
        }
        printf("\n");
    }
}
void selectPlayer(char jogador){
    printf("Escolha um jogador: \n");
    scanf("%c", &jogador);
    
    if (jogador == 'X'){
        printf("Voce esta jogando com o X!");
    } else if (jogador == 'O') {
        printf("Voce esta jogando com o O!");
    } else {
        printf("Esse jogador nao existe! Escolha novamente!");
    }
}

void selectSquare();
    
int main() {
    
    char board[3][3]; // Matrix that representing the board
    char jogador;
    int options;

    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("+-+-+-+-+| WELCOME TO TIC TAC TOE! |+-+-+-+-+\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    // Loop for the options menu, repeating until the start or exit option is entered
    while (1) {
        printf("Enter how you wish to proceed:\n");
        printf("+-+-+-+-+-+-+-| 1 >>PLAY<< 1 |-+-+-+-+-+-+-+-\n");
        printf("+-+-+-+-+-+-+-| 2 >>EXIT<< 2 |-+-+-+-+-+-+-+-\n");
        printf(">>> ");
        scanf("%d", &options);
        // Stop options one and two...
        if (options == 1){
            initializeBoard(board);
            printBoard(board);
            break;
        } else if (options == 2) {
            printf("Closing the game...\n");
            break;
        } else {
            printf("Invalid selection! Please enter the option again.\n");
        }
    }

    selectPlayer(jogador);

    return 0;
    
}