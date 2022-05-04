#include <stdio.h>

int main() {
  // Define width, height, i, j
  int width, height, i, j;

  // Input width
  printf("Width: ");
  scanf("%d", &width);

  // Input height
  printf("Height: ");
  scanf("%d", &height);

  for (i = 0; i < height; i++) {
    // Print "* " width times
    for (j = 0; j < width; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}