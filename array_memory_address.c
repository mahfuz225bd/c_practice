#include <stdio.h>

int main() {
    int scores[5];
    scores[0]=89;
    scores[1]=82;
    scores[2]=90;
    scores[3]=86;
    scores[4]=83;

    printf("%u\n", (unsigned int)&scores);
    printf("%u\n", (unsigned int)&scores[0]);
    printf("%u\n", (unsigned int)&scores[1]);
    printf("%u\n", (unsigned int)&scores[2]);
    printf("%u\n", (unsigned int)&scores[3]);
    printf("%u\n", (unsigned int)&scores[4]);

    printf("%u\n", (unsigned int)&scores[5]);
    printf("%u\n", (unsigned int)&scores[15]);

    return 0;
}