#include <stdio.h>

int main() {
  int a, b;

  printf("a?=");
  scanf("%d", &a);

  printf("b?=");
  scanf("%d", &b);

  if (a > b) {
    printf("A is greatest.");
  } else {
    printf("B is greatest.");
  }

  return 0;
}