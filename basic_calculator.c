#include <stdio.h>

int main() {
  float a, b, result;

  printf("Please enter two numbers (4 1.7): ");
  scanf("%f %f", &a, &b);

  result = a + b;
  printf("a + b = %.4f \n", result);

  result = a - b;
  printf("a - b = %.4f \n", result);

  result = a * b;
  printf("a * b = %.4f \n", result);

  result = a / b;
  printf("a / b = %.4f \n", result);

  return 0;
}