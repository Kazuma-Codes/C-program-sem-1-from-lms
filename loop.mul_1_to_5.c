// C program to print multiplication table from 1 to 5
#include <stdio.h>
int main()
{
int i,j;
/* Outer loop */
for(i=1;i<=10;i++)
{
/* Inner loop */
for(j=1;j<=5;j++)
{
printf("%d\t",(i*j));
}
printf("\n");
}
return 0;
}