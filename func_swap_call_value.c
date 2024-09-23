//Swap two numbers using Call by Value
#include <stdio.h>

void swap(int x, int y);

int main() {
    int a = 2, b = 3;
    printf("Before swap: a=%d b=%d\n", a, b);
    
    swap(a, b); // Call by value, a and b will not change
    
    printf("After swap: a=%d b=%d\n", a, b);
    
    return 0;
}

void swap(int x, int y) {
    int t;
    t = x; // Store the value of x in t
    x = y; // Assign y to x
    y = t; // Assign t (original x) to y
    
    // This shows the swapped values inside the function
    printf("Inside swap: x=%d y=%d\n", x, y);
}
