#include <stdio.h>

int main() {
  // Define a, b and operator
  float a, b;
  char operator;  
  
  // Input a, b, operator
  printf("num1 (+|-|*|/) num2?: ");
  scanf("%f %c %f", &a, &operator, &b);

  // Print result according to `operator` = '+' or '-' or '*' or '/'
  switch(operator){
    case '+':
      printf("%.2f + %.2f = %.2f\n", a, b, a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", a, b, a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n", a, b, a * b);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f\n", a, b, a / b);
      break;
    default:
      printf("Error! operator is not correct. Operator should be +, -, * or /.\n");
  }

  return 0;
}
