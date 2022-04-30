#include <stdio.h>

int main() {
  int year, isLeapYear;
  
  isLeapYear = 0;

  printf("Enter year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        isLeapYear = 1;
      } else {
        isLeapYear = 0;
      }
    }
  } else {
    isLeapYear = 0;
  }

  if (isLeapYear) {
    printf("%d is a leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
  
  return 0;
}