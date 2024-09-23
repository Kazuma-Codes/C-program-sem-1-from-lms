//It takes 2 numbers as input from user, and display which is the greater number.
#include <stdio.h>

// Function declaration
void greatNum(int a, int b);

int main() {
    int i, j;
    printf("Enter 2 numbers that you want to compare: "); // Improved prompt
    scanf("%d%d", &i, &j);
    greatNum(i, j); // Function call
    return 0;
}

// Function definition
void greatNum(int x, int y) {
    if (x > y) {
        printf("The greater number is: %d\n", x); // Improved output with newline
    } else {
        printf("The greater number is: %d\n", y); // Improved output with newline
    }
}
