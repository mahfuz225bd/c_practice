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

  // Print smallest
  if (a < b) {
    printf("A is smallest");
  } else {
    printf("B is smallest");
  }

  return 0;
}