//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the   function.
#include <stdio.h>

// Function declarations
int factorial(int n);
double sumSeries(int terms);

int main() {
    int terms = 5; // Number of terms in the series

    // Calculate the sum of the series
    double result = sumSeries(terms);

    // Print the result
    printf("The sum of the series is: %.2f\n", result);

    return 0;
}

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1; // 0! = 1! = 1
    }
    return n * factorial(n - 1); // Recursive call
}

// Function to calculate the sum of the series
double sumSeries(int terms) {
    double sum = 0.0;
    for (int i = 1; i <= terms; i++) {
        sum += (double)factorial(i) / i; // Add each term to the sum
    }
    return sum;
}
