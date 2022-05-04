#include <stdio.h>

int main() {
  // Define i
  int i;

  // Repeat i=0 to 100
  for (i = 0; i <= 100; i++) {
    // Print i is even or odd
    if (i % 2 == 0) {
      printf("%d is EVEN.\n", i);
    } else {
      printf("%d is ODD.\n", i);
    }
  }

  return 0;
}