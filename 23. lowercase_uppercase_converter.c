#include <stdio.h>

int main(){
    // init name, i
    char my_str[30];
    int i = 0;

    // Set name
    printf("Enter a string: ");
    fgets(my_str, 30, stdin);

    // Convert to uppercase character by character
    while(my_str[i]) {
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