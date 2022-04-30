#include <stdio.h>

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0){
    printf("Number is EVEN\n");
  } else {
    printf("Number is ODD\n");
  } 

  return 0;
}
