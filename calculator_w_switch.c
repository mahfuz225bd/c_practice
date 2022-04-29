#include <stdio.h>

int main() {
  char operator;
  float a, b;

  while (1) {
    printf("num1 (+|-|*|/) num2?: ");
    scanf("%f %c %f", &a, &operator, &b);

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
  }

  return 0;
}
