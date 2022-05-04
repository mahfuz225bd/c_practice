#include <stdio.h>

int main() {
  int width, height, i, j;

  printf("Width: ");
  scanf("%d", &width);

  printf("Height: ");
  scanf("%d", &height);

  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}