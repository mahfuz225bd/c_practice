#include <stdio.h>

int main() {
  // Define i, sum, avg, max
  int i, size, sum, avg, max;

  // Set size
  printf("Enter Array Length Size: ");
  scanf("%d", &size);

  // Define nums[size]
  int nums[size];

  // Push numbers into nums
  printf("Input:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &nums[i]);
  }

  // Output
  printf("Output:\n");
  for (i = 0; i < size; i++) {
    printf("%d\t", nums[i]);
  }

  printf("\n");

  // Get sum
  sum = 0;

  for (i = 0; i < size; i++) {
    sum += nums[0];
  }

  printf("Sum=%d\n", sum);

  // Get avg
  avg = sum / size;

  printf("Average=%d\n", avg);

  // Get max
  max = nums[0];

  for (i = 0; i < size; i++) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }

  printf("Max=%d\n", max);

  return 0;
}