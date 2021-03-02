#include <stdio.h>
#include <conio.h>
// http://www.cprogrammingnotes.com/question/tic-tac-toe-game.html

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main() {
    int player = 1;
    int i;
    int player_input;
    char mark;

    do {
        board();

        if (player % 2) {
            player = 1;
        }
        else {
            player = 2;
        }

        printf("Player %d, enter a square:  ", player);
        scanf("%d", &player_input);

                // creating marks on the board

        if (player == 1) {
            mark = 'X';
        }
        else {
            mark = 'O';
        }

        if (player_input == 1 && square[1] == '1') {
            square[1] = mark;
        }
        else if (player_input == 2 && square[2] == '2') {
            square[2] = mark;
        }
        else if (player_input == 3 && square[3] == '3') {
            square[3] = mark;
        }
        else if (player_input == 4 && square[4] == '4') {
            square[4] = mark;
        }
        else if (player_input == 5 && square[5] == '5') {
            square[5] = mark;
        }
        else if (player_input == 6 && square[6] == '6') {
            square[6] = mark;
        }
        else if (player_input == 7 && square[7] == '7') {
            square[7] = mark;
        }
        else if (player_input == 8 && square[8] == '8') {
            square[8] = mark;
        }
            
        else if (player_input == 9 && square[9] == '9') {
            square[9] = mark;
        }
        else {
            printf("There is already a mark there!");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  -1);
    
    board();
    
    if (i == 1)
        printf(">>> Player %d in the winner! ", --player);
    else
        printf(">>>DRAW");

    getch();

    return 0;
}



// check the board if the game is finished
// return 1 if game is a win
//return 0 if the game is done
// return - 1 if the game has no result
int checkwin() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


// draw the board and update the marks according to the players input
void board() {
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}