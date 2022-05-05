#include <stdio.h>

int main() {
    // Define scores[5], sum, i, len, avg
    int scores[5], sum, i, len, avg;
    
    // Declare scores[5], sum
    scores[0]=89;
    scores[1]=82;
    scores[2]=90;
    scores[3]=86;
    scores[4]=83;
    sum = 0;

    // Set len
    len = sizeof(scores) / sizeof(int);

    // Do sum
    for (i = 0; i < len; i++) {
      sum += scores[i];
    }

    // Set avg
    avg = sum / len;

    // Print avg
    printf("Average=%d\n", avg);

    return 0;
}

/* Resources:
- How to Find Length of Array in C - https://www.knowprogram.com/c-programming/find-length-of-array-in-c/
*/