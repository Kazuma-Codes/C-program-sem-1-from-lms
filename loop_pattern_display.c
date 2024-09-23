//  Display the pattern
// ********
// ********
// ********
// ********
#include <stdio.h>
int main()
{
int i=1;
do // outer loop
{
int j=1;
do // inner loop
{
printf("*");
j++;
}while(j<=8);
printf("\n");
i++;
}while(i<=4);
}