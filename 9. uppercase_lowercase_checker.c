#include <stdio.h>

int main() {
  char chr;
  
  printf("Input Character: ");
  scanf("%c", &chr);

  if (chr >= 48 && chr <= 57) {
    printf("%c is a Number.\n", chr);
  } else if (chr >= 65 && chr <= 90) {
    printf("%c is a UPPERCASE.\n", chr);
  } else if (chr >= 97 && chr <= 122) {
    printf("%c is a LOWERCASE.\n", chr);
  } else {
    printf("%c is a special character.\n", chr);
  }

  return 0;
}
