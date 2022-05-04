#include <stdio.h>

int main() {
// Define i
  int i;

  // Repeat for i=0 to 100
  for (i = 0; i <= 100; i++) {
    // Print i, if odd
    if (i % 2 != 0) {
      printf("Number: %d.\n", i);
    }
  }

    return 0;
}


/*
Or,
  for (int i = 0; i <= 100; i++) {
      // If even, continue
      if (i % 2 == 0) {
          continue;
      }
      printf("Number: %d.\n", i);
  }

Or,
for (int i = 1; i <= 100; i+=2) {
    printf("Number: %d\n", i);
}

Resources:
- https://www.javatpoint.com/c-continue
*/