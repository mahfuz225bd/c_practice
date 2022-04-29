#include <stdio.h>

int main() {
  char ch;

  printf("Input a char and convert into reverse case: ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z') {
    printf("Swapcase=%c", ch + 32);
  } else if (ch >= 'a' && ch <= 'z') {
    printf("Swapcase=%c", ch - 32);
  } else {
    printf("Invalid Case");
  }
  
  return 0;
}
