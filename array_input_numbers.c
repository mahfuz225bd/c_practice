#include <stdio.h>

int main() {
    // Define size, nums[size], i and set size = 5
    int size = 5;
    int nums[size], i;

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

    return 0;
}