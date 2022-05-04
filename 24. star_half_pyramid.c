#include <stdio.h>

int main(){
  // Define i, j, rows
  int i, j, rows;

  // Input rows
  printf("Rows=");
  scanf("%d", &rows);

  // Draw
  // Set i=0 and repeat while i < rows and execute statement(s)
  for (i = 0; i < rows; i++) {
    // Set j=0 and print "* " while j <= i
    for (j = 0; j <= i; j++) {
      printf("* ");
    }

    // New line
    printf("\n");
  }

  return 0;
}