#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Define get_random_number
    int get_random_number;
    
    // Seed for rand()
    time_t t;
    srand((unsigned) time(&t));

    // Set get_random_number between 1 to 100
    get_random_number = rand() % 100 + 1;

    // Print get_random_number
    printf("Random Number: %d", get_random_number);

    return 0;
}

/* Resources:
- time_t - https://en.cppreference.com/w/c/chrono/time_t
- time.h - https://www.tutorialspoint.com/c_standard_library/c_function_time.htm
- srand and rand - https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
