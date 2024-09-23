// Swap two numbers using Call by Reference
#include <stdio.h>

void swap(int* c, int* d); // Function declaration

int main() {
    int a = 2, b = 3;
    printf("Before swap: a=%d b=%d\n", a, b);
    
    swap(&a, &b); // Call by reference, passing the addresses of a and b
    
    printf("After swap: a=%d b=%d\n", a, b); // Values after swap
    
    return 0;
}

void swap(int* c, int* d) {
    int t;
    
    t = *c; // Dereference c to get the value of a
    *c = *d; // Assign the value of b to a
    *d = t; // Assign the original value of a to b
    
    // Print the swapped values inside the function
    printf("Inside swap: x=%d y=%d\n", *c, *d);
}
