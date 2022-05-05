#include <stdio.h>

int main() {
    // Define my_str[30], i
    char my_str[30];
    int i;

    // Declare i
    i = 0;

    // Input my_str
    printf("Enter a string: ");
    fgets(my_str, 30, stdin);

    // Convert to uppercase character by character (using loop)
    // Repeat while my_str[i] is available
    while(my_str[i]) {
        // If my_str[i] is between 'a' to 'z' then convert to uppercase
        if (my_str[i] >= 'a' && my_str[i] <= 'z') {
            my_str[i] = my_str[i] - 32;
        }
        i++;
    }

    // Show output
    printf("Output: %s\n", my_str);

    return 0;
}

/* Resources:
- fgets - https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm
- gets - https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
- gets() is risky to use! - https://www.geeksforgeeks.org/gets-is-risky-to-use/?ref=gcse
- scanf() vs gets() - https://www.geeksforgeeks.org/difference-between-scanf-and-gets-in-c/?ref=gcse
*/