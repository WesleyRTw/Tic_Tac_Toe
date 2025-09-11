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
    printf("+0--1--2+\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("|%c|", board[i][j]);
        }
        printf("\n");
    }
    printf("+-+-+-+-+\n");
}
// Function to let the player choose their symbol (X or O)
char selectPlayer() {
    // Variable receives the player's choice locally within the function
    char local_player; 
    // Loop to validate the player's choice
    while(1) {
        printf("Choose the first player (X or O): \n");
        scanf(" %c", &local_player);
        // Checks if a player has been selected.
        if (local_player == 'X' || local_player == 'O') {
            printf("You are playing as %c!\n", local_player);
            return local_player; // Return the choice
        } else {
            printf("That player does not exist! Please choose again! \n");
        }
    }
}
// Function to check for a winning line
char winningLine(char board[3][3]) {
    for (int i = 0; i < 3; i++){
        // Line scan
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
            return board[i][0];
        }
        // Column scan
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '){
            return board[0][i];
        }
    }
    // Vertical scanning
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '){
        return board[0][2];
    }
    // If there is a tie
    return ' ';
}
// Function to run the game until it's finished
void playGame(char board[3][3]) {
    initializeBoard(board);
    char ultimate_player = selectPlayer();
    int turn_counter = 0;
    char winner = ' ';
    // Game loop that only ends when there is a winner or a draw
    while(1){
        int row, column; 
        printBoard(board);
        
        printf("Player %c will begin! Enter row and column (ex: 1 1): \n", ultimate_player);
        if (scanf("%d %d", &row, &column) != 2){
            while(getchar() != '\n');
            printf("That's not quite right. Please follow the example.\n");
            continue;
        }
        // Checks if the selected square is not already occupied.
        if (board[row][column] != ' '){
            printf("Hey, don't try to cheat! Someone's already there.\n");
            continue;
        }
        // Checks if the move is out of bounds
        if (row < 0 || row > 2 || column < 0 || column > 2){
            printf("Seriously? That position doesn't exist, silly!\n");
            continue;
        }
        // Updates the board after the checks are complete. Increments the turn counter by 1
        board[row][column] = ultimate_player;
        turn_counter++;
        // When the turn count reaches 5, we call the winningLine() function to check for a winner
        if (turn_counter >= 5){
            winner = winningLine(board);
            // Declares the winner
            if (winner != ' '){
                printBoard(board);
                printf("Player %c has won the game!\n", winner);
                break;
            }
        }
        // Checks for draw edge cases and, if found, declares a draw
        if (turn_counter == 9 && winner == ' '){
                printBoard(board);
                printf("It's a draw!\n");
                break;
        }
        // Altera o jogador do turno atual
        if (ultimate_player == 'X'){
            ultimate_player = 'O';
        } else {
            ultimate_player = 'X';
        }
    }
}
// Main function (Menu)
int main() {
    char board[3][3]; // Matrix that representing the board
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
        if (options == 1) {
            playGame(board);
            break;
        } else if (options == 2) {
            printf("Closing the game...\n");
            break;
        } else {
            printf("Invalid selection! Please enter the option again.\n");
        }
    }
    return 0;
    
}