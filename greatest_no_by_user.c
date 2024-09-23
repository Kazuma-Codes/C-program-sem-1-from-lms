//It takes 2 numbers as input from user, and display which is the greater number.
#include <stdio.h>

void greatNum(); // Function declaration

int main() {
    greatNum(); // Function call
    return 0;
}

void greatNum() { // Function definition
    int i, j;
    printf("Enter 2 numbers that you want to compare: ");
    scanf("%d%d", &i, &j);
    
    if (i > j) {
        printf("The greater number is: %d\n", i);
    } else if (j > i) {
        printf("The greater number is: %d\n", j);
    } else {
        printf("Both numbers are equal: %d\n", i);
    }
}
