#include <stdio.h>

int main(){
  // Define i, j, rows
  int i, j, rows = 4;

  // Set rows
  printf("Rows=");
  scanf("%d", &rows);

  // Draw
  for (i = 0; i <= rows; i++) {
    // Print " " from i+1 while j <= rows
    for (j = i + 1; j <= rows; j++) {
      printf(" ");
    }

    // Print "*" for 2n-1 times
    for (j = 0; j < (2*i) - 1; j++) {
      printf("*");
    }

    // New line
    printf("\n");
  }

  return 0;
}