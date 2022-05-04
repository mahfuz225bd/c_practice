#include <stdio.h>

int main() {
  // Define name[20]
  char name[20];

  // Input name
  printf("Name: ");
  scanf("%s", &name);

  // Print name
  printf("Welcome, %s", name);
  
  return 0;
}