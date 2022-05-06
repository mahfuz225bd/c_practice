#include <stdio.h>

int main() {
  // Define and declare numbers[], length
  int numbers[] = {5, 2, 8, 9, 4, 4, 1, 8, 2, 6, 6, 5, 3};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  // Define i, j, temp
  int i, j, temp;

  // Output Unsorted Array
  printf("Unsorted Array: ");
  for (i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }

  printf("\n");

  // Sort Array
  for (i = 0; i < length; i++) {
    for (j = 0; j < length; j++) {
      if (numbers[i] < numbers[j]) {
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }

  // Output Sorted Array
  printf("Sorted Array: ");
  for (i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }

  printf("\n");

  return 0;
}

/* Resources:
- Swap Two Numbers - https://www.geeksforgeeks.org/c-program-swap-two-numbers/
*/