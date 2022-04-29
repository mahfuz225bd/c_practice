#include <stdio.h>
#include <ctype.h>

int main() {
  int age;
  char has_nid, has_passport;

  age = 19;
  has_nid = 'y';
  has_passport = 'y';

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
