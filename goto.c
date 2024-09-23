#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 5; i++) {
        if (i == 2) {
            goto there; // Jump to the label 'there'
        }
        printf("%d\n", i); // Print the value of i
    }
    
    there:
    printf("Two"); // This will be printed after the jump
    return 0;
}
