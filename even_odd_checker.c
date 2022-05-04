#include <stdio.h>

int main() {
  // Define num
  int num;

  // Input num
  printf("Enter a number: ");
  scanf("%d", &num);

  // Print number is even or odd
  if (num % 2 == 0){
    printf("Number is EVEN\n");
  } else {
    printf("Number is ODD\n");
  } 

  return 0;
}
