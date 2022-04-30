#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int lucky_number, choosen_number;
  time_t t;

  // Set seed for rand()
  srand((unsigned) time(&t));

  // Set random lucky number
  lucky_number = rand() % 10 + 1;

  // Get choosen_number from user
  printf("Guess a Number from 1 to 10: ");
  scanf("%d", &choosen_number);

  // Check matched or not
  if (choosen_number == lucky_number){
    printf("You WIN");
  } else {
    printf("You Lose, Lucky Number was %d", lucky_number);
  }

  return 0;
}
