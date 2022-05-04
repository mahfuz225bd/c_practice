#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Define lucky_number, choosen_number
  int lucky_number, choosen_number;  

  // Seed for rand()
  time_t t;
  srand((unsigned) time(&t));

  // Set random lucky number
  lucky_number = rand() % 10 + 1;

  // Input choosen_number
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
