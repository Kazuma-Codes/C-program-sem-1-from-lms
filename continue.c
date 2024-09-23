#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i < 3; i++) { // Outer loop (runs 2 times)
        for (j = 1; j < 5; j++) { // Inner loop (runs 4 times for each iteration of outer loop)
            if (j == 2) {
                continue; // Skip the rest of the inner loop body when j equals 2
            }
            printf("%d\n", j); // Print the value of j
        }
    }
    return 0;
}
