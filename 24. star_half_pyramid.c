#include <stdio.h>

int main(){
  // Define i, j, rows
  int i, j, rows;

  // Set rows
  printf("Rows=");
  scanf("%d", &rows);

  // Draw
  for (i = 0; i < rows; i++) {
    // Print "* " while j <= i
    for (j = 0; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}