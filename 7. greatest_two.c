#include <stdio.h>

int main() {
  // Define a, b
  int a, b;

  // Input a
  printf("a?=");
  scanf("%d", &a);

  // Input b
  printf("b?=");
  scanf("%d", &b);

  // Print greatest
  if (a > b) {
    printf("A is greatest.");
  } else {
    printf("B is greatest.");
  }

  return 0;
}