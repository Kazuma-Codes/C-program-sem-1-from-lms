//It takes 2 numbers as input from user, and display which is the greater number.
#include <stdio.h>

int greatNum(); // Function declaration

int main() {
    int result;
    result = greatNum(); // Function call
    printf("The greater number is: %d\n", result); // Improved output with newline
    return 0;
}

int greatNum() { // Function definition
    int i, j, greaterNum;
    printf("Enter 2 numbers that you want to compare: "); // Improved prompt
    scanf("%d%d", &i, &j);
    
    if (i > j) {
        greaterNum = i;
    } else {
        greaterNum = j;
    }
    
    // Returning the result
    return greaterNum;
}
