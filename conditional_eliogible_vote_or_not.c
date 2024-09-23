//To check the person is eligible for vote or not using conditional operator.
#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility using the conditional operator
    // If age is 18 or older, eligible; otherwise, not eligible
    printf("You are %s to vote.\n", (age >= 18) ? "eligible" : "not eligible");

    return 0;
}
