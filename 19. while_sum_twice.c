#include <stdio.h>

int main() {
    int a, b;
    char ch;

    while (ch != 'q') {
      printf("Enter Two Numbers (5 4): ");
      scanf("%d %d", &a, &b);
      printf("Result=%d\n", a + b);

      printf("For again enter 'c' and to quit enter 'q': ");
      scanf(" %c", &ch);
    }

    return 0;
}