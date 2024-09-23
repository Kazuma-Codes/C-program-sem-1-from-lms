//C program to check whether entered number by the user is prime using goto.
/* #include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // A prime number should be greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Start loop from 2 to check divisibility
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            goto not_prime;
        }
    }

    // If no divisors were found
    goto prime;

not_prime:
    printf("%d is not a prime number.\n", num);
    return 0;

prime:
    printf("%d is a prime number.\n", num);

    return 0;
} */
#include<stdio.h>
main()
{
int num,i;
printf("enter a number\n");
scanf("%d",&num);
i=1;
l:
i=i+1;
if (num%i!=0)
{
if(i<num/2)
goto l;
else
printf("number is prime = %d", num);
}
else
{
printf("number is not prime");
}
}