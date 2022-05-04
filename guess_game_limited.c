#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Define lucky_number, choosen_number, chance, is_loose
  int lucky_number, choosen_number, chance, is_loose;
  
  // Declare chance and is_loose (1 = true)
  chance = 3;
  is_loose = 1;

  // Seed for rand()
  time_t t;
  srand((unsigned) time(&t));

  // Set random lucky number between 1 to 10
  lucky_number = rand() % 10 + 1;

  // Get choosen_number from user input while not matched (limited)
  while (chance > 0) {
    // Input choosen_number
    printf("Guess a Number from 1 to 10 (%d): ", chance);
    scanf("%d", &choosen_number);

    // If matched, print "matched", set is_loose = 0 and exit
    if (choosen_number == lucky_number) {
      printf("Congratulation! You have choose the correct answer.\n");
      is_loose = 0;
      break;
    }

    // Set chance = chance - 1
    chance--;
  }

  // If lose, print "You lose" and lucky_number
  if (is_loose) {
    printf("You have lose. Lucky number was %d", lucky_number);
  }

  return 0;
}