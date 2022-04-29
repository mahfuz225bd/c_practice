#include <stdio.h>
#include <stdbool.h>

int main() {
  int num;

  while(true){
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
      printf("Number is EVEN\n");
    } else {
      printf("Number is ODD\n");
    }
  }

  return 0;
}
