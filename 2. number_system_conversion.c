#include <stdio.h>

int main() {
  // Define num
  int num;
  
  // Input num
  printf("Input Number: ");
  scanf("%d", &num);

  // Print decimal, octal and hexadecimal
  printf("Decimal = %d\n", num);
  printf("Octal = %o\n", num);
  printf("Hexadecimal = %X\n", num);

  return 0;
}

/* Resources:
- Format Specifiers in C - https://www.freecodecamp.org/news/format-specifiers-in-c/
*/