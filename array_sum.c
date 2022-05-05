#include <stdio.h>

int main() {
    // Define scores[5], sum, i
    int scores[5], sum, i;
    
    // Declare scores[5], sum
    scores[0]=89;
    scores[1]=82;
    scores[2]=90;
    scores[3]=86;
    scores[4]=83;
    sum = 0;

    // Do sum
    for (i = 0; i < 5; i++) {
      sum += scores[i];
    }

    // Print sum
    printf("Sum=%d\n", sum);

    return 0;
}