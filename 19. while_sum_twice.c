#include <stdio.h>

int main() {
  // Define a, b, ch
  int a, b;
  char ch;

  // Execute statement(s) while ch != 'q'
  while (ch != 'q') {
    // Input a, b
    printf("Enter Two Numbers (5 4): ");
    scanf("%d %d", &a, &b);

    // Print result of a + b
    printf("Result=%d\n", a + b);

    // input anything continue or input 'q' to exit
    printf("For again enter 'c' and to quit enter 'q': ");
    scanf(" %c", &ch);
  }

  return 0;
}