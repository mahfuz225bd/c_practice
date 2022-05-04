#include <stdio.h>
#include <ctype.h>

int main() {
  // Define age, has_nid, has_passport
  int age;
  char has_nid, has_passport;

  // Input age
  printf("Enter your age: ");
  scanf("%d", &age);

  // Input and set has_nid with 'y' or 'n'
  printf("Have NID? (y or n): ");
  scanf(" %c", &has_nid); // " %c" for second input
  
  // Input and set has_passport with 'y' or 'n'
  printf("Have Passport? (y or n): ");
  scanf(" %c", &has_passport); // " %c" for third input

  printf("\n");

  // Execute statement(s) if age is 18+ otherwise print "Not allowed"
  if (age >= 18) {
    // if has_nid = 'y' and has_passport = 'y' print "Allowed" otherwise print "Need both"
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
