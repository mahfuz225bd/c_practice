#include <stdio.h>

int main() {
  int a, b;

  printf("a?=");
  scanf("%d", &a);

  printf("b?=");
  scanf("%d", &b);

  if (a < b) {
    printf("A is smallest");
  } else {
    printf("B is smallest");
  }

  return 0;
}