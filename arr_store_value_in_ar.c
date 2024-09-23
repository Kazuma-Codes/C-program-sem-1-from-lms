 //Program to take 5 values from the user and store them in an array
 #include <stdio.h>

int main()
{
    int values[5]; // Array to store 5 integers

    printf("Enter 5 integers: ");
    // Input loop
    for(int i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]); // Read integer into array
    }

    printf("Displaying integers: ");
    // Output loop
    for(int i = 0; i < 5; ++i)
    {
        printf("%d\n", values[i]); // Print each integer
    }

    return 0;
}
