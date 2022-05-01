#include <stdio.h>
#include <ctype.h>

int main() {
  int age;
  char has_nid, has_passport;

  printf("Enter your age: ");
  scanf("%d", &age);
  
  printf("Have NID? (y or n): ");
  scanf(" %c", &has_nid); // " %c" for second input
  
  printf("Have Passport? (y or n): ");
  scanf(" %c", &has_passport); // " %c" for third input

  printf("\n");

  if (age >= 18) {
    if (has_nid == 'y' && has_passport == 'y'){
      printf("You are allowed.");
    } else {
      printf("Need your both NID and Passport.");
    }
  } else {
    printf("You are not allowed!");
  }

  return 0;
}
