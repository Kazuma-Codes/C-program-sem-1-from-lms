//Write a program to show the use of bitwise operators.in c
#include <stdio.h>

int main() {
    int a = 12;  // Binary: 1100
    int b = 25;  // Binary: 11001

    // Bitwise AND
    int andResult = a & b;   // 1100 & 11001 = 1000 (8 in decimal)
    printf("Bitwise AND of %d and %d = %d\n", a, b, andResult);

    // Bitwise OR
    int orResult = a | b;    // 1100 | 11001 = 11101 (29 in decimal)
    printf("Bitwise OR of %d and %d = %d\n", a, b, orResult);

    // Bitwise XOR
    int xorResult = a ^ b;   // 1100 ^ 11001 = 10101 (21 in decimal)
    printf("Bitwise XOR of %d and %d = %d\n", a, b, xorResult);

    // Bitwise NOT
    int notResult = ~a;      // ~1100 = 0011 (bitwise negation of 12 in 4-bit is -13 in decimal with two's complement)
    printf("Bitwise NOT of %d = %d\n", a, notResult);

    // Left Shift
    int leftShiftResult = a << 2;   // 1100 << 2 = 110000 (48 in decimal)
    printf("Left shift of %d by 2 = %d\n", a, leftShiftResult);

    // Right Shift
    int rightShiftResult = a >> 2;  // 1100 >> 2 = 11 (3 in decimal)
    printf("Right shift of %d by 2 = %d\n", a, rightShiftResult);

    return 0;
}
