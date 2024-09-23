//Program to print first 10 multiples of 5.
#include <stdio.h>

int main() {
    int a, i;
    a = 5; // Number for which the multiplication table is to be printed
    i = 1;
    
    do {
        printf("%d\t", a * i); // Print the product of 'a' and 'i'
        i++;
    } while (i <= 10); // Loop until 'i' is less than or equal to 10
    
    return 0; 
}
