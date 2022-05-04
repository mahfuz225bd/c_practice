#include <stdio.h>

int main() {
  // Define year, isLeapYear
  int year, isLeapYear;

  // Input year
  printf("Enter year: ");
  scanf("%d", &year);

  // If year is leap year then set isLeapYear = 1 (true) otherwise set isLeapYear = 0 (false)
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

  // Print year is leap year or not
  if (isLeapYear) {
    printf("%d is a leap year.\n", year);
  } else {
    printf("%d is not a leap year.\n", year);
  }
  
  return 0;
}