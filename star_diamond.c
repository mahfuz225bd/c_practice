#include <stdio.h>

int main() {
  // Define i, j, rows, stars, spaces
  int i, j, rows;
  int stars, spaces;

  // Input rows
  printf("Rows=");
  scanf("%d", &rows);
  
  // Declare stars, spaces
  stars = 1;
  spaces = rows - 1;

  // Draw
  for (i = 1; i < rows * 2; i++) {
    for (j = 1; j <= spaces; j++) {
      printf(" ");
    }

    for (j = 1; j < stars * 2; j++) {
      printf("*");
    }

    printf("\n");

    if (i < rows) {
      spaces--;
      stars++;
    } else {
      spaces++;
      stars--;
    }    
  }

  return 0;
}