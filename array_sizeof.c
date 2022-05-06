#include <stdio.h>

int main() {
    // Define scores[5] arr_len, each_len, len
    int scores[5], arr_len, each_len, len;
    
    // Declare scores[5]
    scores[0]=89;
    scores[1]=82;
    scores[2]=90;
    scores[3]=86;
    scores[4]=83;

    // Set arr_len, each_len, len
    arr_len = sizeof(scores);
    each_len = sizeof(scores[0]); // sizeof(scores[0]) == sizeof(int) => 4 bit(s)
    len = arr_len / each_len;

    printf("Length of Array=%d\n", len);

    return 0;
}

/* Resources:
- How to Find Length of Array in C - https://www.knowprogram.com/c-programming/find-length-of-array-in-c/
- Sizeof Operator used in Array - https://youtu.be/c-Ok-wSC3Js?list=PL_XxuZqN0xVASsjyqiNzgjUWHbDkN2Scy
*/