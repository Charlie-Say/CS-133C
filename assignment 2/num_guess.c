#include <stdio.h>

//Ask one user to enter a secret number to be guessed


int main()
{
    int low;
    low = 1;
    int high;
    high = 100;

    int secret_num;
    printf("Enter a secret number: ");
    scanf("%d", &secret_num);
    printf("You entered: %d\n", secret_num);

    int i;
    for (i=1; i<=5; i++)
    {

      int num_guess;

      printf("Guess the secret number between the range of %d - %d: ", low, high);
      scanf("%d", &num_guess);

      if (num_guess == secret_num)
      {
        printf("Congratulations!");
        return 0;
      }

      if (num_guess < secret_num)
      {
        printf("Your guess is too low.\n");
        low = num_guess + 1;
      }

      if (num_guess > secret_num)
      {
        printf("Your guess is too high.\n");
        high = num_guess - 1;
      }

    }
    
}

//-accept and stores secret number into a variable

// use a loop to repeatedly do:
// range of possible numbers
// tell users how many guesses left
// ask user to guess the secret number
// tell the user whether the guess is too high, low, or correct (using if statement)
// change the range of possible numbers to reflect the effect of the users guess
// tell the second user whether they guessed the number or ran out of guesses
// if out of guesses, tell the secret number and how close their guess wa. otherwise, print 'congratulations'
// let the users play again if they want to