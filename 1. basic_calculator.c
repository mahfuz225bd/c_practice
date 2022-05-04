#include <stdio.h>

int main() {
  // Define a, b, result
  float a, b, result;

  // Input a, b
  printf("Please enter two numbers (4 1.7): ");
  scanf("%f %f", &a, &b);

  // Print a + b
  result = a + b;
  printf("a + b = %.4f \n", result);

  // Print a - b
  result = a - b;
  printf("a - b = %.4f \n", result);

  // Print a * b
  result = a * b;
  printf("a * b = %.4f \n", result);

  // Print a / b
  result = a / b;
  printf("a / b = %.4f \n", result);

  return 0;
}