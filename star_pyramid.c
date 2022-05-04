#include <stdio.h>

int main(){
  // Define i, j, rows
  int i, j, rows;

  // Input rows
  printf("Rows=");
  scanf("%d", &rows);

  // Draw
  // Repeat for i=0 to rows and execute statement(s)
  for (i = 0; i <= rows; i++) {
    // Print " " from i+1 while j <= rows
    for (j = i + 1; j <= rows; j++) {
      printf(" ");
    }

    // Print "*" for 0 to (2*i)-1
    for (j = 0; j < (2*i) - 1; j++) {
      printf("*");
    }

    // New line
    printf("\n");
  }

  return 0;
}