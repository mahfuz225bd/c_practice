#include <stdio.h>

int main() {
  // Define scores[5], max, i
  int scores[5], max, i;
  
  // Declare scores[5], max
  scores[0]=89;
  scores[1]=82;
  scores[2]=90;
  scores[3]=86;
  scores[4]=83;
  max = scores[0];

  // Find max
  for (i = 0; i < 5; i++) {
    if (scores[i] > max) {
      max = scores[i];
    }
  }

  // Print max
  printf("Max=%d\n", max);

  return 0;
}