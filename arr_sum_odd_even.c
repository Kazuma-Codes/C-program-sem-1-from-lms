//Sum of even and odd of Two Dimensional Array
#include <stdio.h>

int main() {
    int i = 0, j = 0;
    int arr[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
    int even = 0;
    int odd = 0;

    // Calculate sums of even and odd numbers
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(arr[i][j] % 2 == 0) {
                even = even + arr[i][j];
            } else {
                odd = odd + arr[i][j];
            }
        }
    }

    // Print the results
    printf("Sum of even = %d \n", even);
    printf("Sum of odd = %d", odd);

    return 0;
}
