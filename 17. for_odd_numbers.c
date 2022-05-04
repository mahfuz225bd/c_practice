#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i+=2) {
        printf("Number: %d\n", i);
    }

    return 0;
}


/*
Or,
  for (int i = 0; i <= 100; i++) {
      if (i % 2 == 0) { // If even, continue
          continue;
      }
      printf("Number: %d.\n", i);
  }

Resources:
- https://www.javatpoint.com/c-continue
*/