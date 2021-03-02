#include <stdio.h>
#include <string.h>
#include <ctype.h>



int validate(char *word) {               // https://www.zentut.com/c-tutorial/c-string/
  int i;                                 // loop through the string
    for (i = 0; i < strlen(word); i++) {
      if (isalpha(word[i]) == 0){           // tests for letter in string is valid
        printf("not a valid word. \n");
        return 1;

      }
    } 
}


void player1() {
  char secret_word[10];
  printf("Player 1, what is your secret word?: ");
  scanf("%s", secret_word);
  if (validate(secret_word) == 1) {
    player1();
  }

  printf("\n");
  printf("Amount of Letters \n");
  printf("\n");
  int i;
  char *hyphen = "-";
  for (i=0; i < strlen(secret_word); i++) {
    printf(" - ");
  }
  printf("\n");
  printf("\n");
  
}

void player2() {
  char guess[1];
  printf("Player 2, guess a letter: ");
  scanf("%s", guess);
  validate(guess);


}

int main() {
  char play_again;
  do {
    player1();

    printf("Do you want to play again? y/n: ");
    scanf(" %c", &play_again);
  } while (play_again == 'y' || play_again == 'Y');

  return 0;
}