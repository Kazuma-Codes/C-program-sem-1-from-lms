//Write a program to clear a bit.
#include <stdio.h>

int clearBit(int num, int bitPosition) {
    // Create a mask with a 1 at the bit position, then negate it to make that position 0
    int mask = ~(1 << bitPosition);
    // Use the bitwise AND operation to clear the bit
    return num & mask;
}

int main() {
    int num = 29;  // Example number: 29 (11101 in binary)
    int bitPosition = 3;  // Clear the 3rd bit (counting from 0)

    printf("Original number: %d\n", num);
    int result = clearBit(num, bitPosition);
    printf("Number after clearing bit %d: %d\n", bitPosition, result);
    
    return 0;
}
