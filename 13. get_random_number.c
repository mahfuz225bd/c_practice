#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int get_random_number;
    time_t t;

    srand((unsigned) time(&t));

    get_random_number = rand() % 100 + 1;

    printf("Random Number: %d", get_random_number);

    return 0;
}

/* Resources:
- time_t - https://en.cppreference.com/w/c/chrono/time_t
- time.h - https://www.tutorialspoint.com/c_standard_library/c_function_time.htm
- srand and rand - https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
