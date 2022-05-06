#include <stdio.h>

int main() {
  // Define and Declare rolls[], length
  int rolls[] = {1, 2, 3, 4, 6, 7, 9, 12, 13, 14, 15};
  int length = sizeof(rolls)/sizeof(rolls[0]);

  // Define search_item, i
  int search_item, i;

  // Set search
  printf("Search Roll: ");
  scanf("%d", &search_item);

  // Search
  for (i = 0; i < length; i++) {
    if (rolls[i] == search_item) {
      printf("Found at index - %d\n", i);
      break;
    } else {
      printf("Not found!\n");
      break;
    }
  }
  
  return 0;
}