#include<stdio.h>
int main(){
int i ,j,sumodd = 0,sumeven = 0 ,rows,col;
printf("the no of rows");
scanf("%d",&rows);
printf("the no of col");
scanf("%d",&col);

int arr[rows][col];

printf ("the elements are");
for(i=0;i<rows;i++){
    for(j=0;j<col;j++){
scanf("%d",&arr[i][j]);


if(arr[i][j] %2 == 0)
sumeven += arr[i][j];

else
sumodd += arr[i][j];


    }
}printf("the array is odd%d\n",sumodd);
printf("the array is even%d\n",sumeven);

return 0;

}