#include<stdio.h>
int main(){
    int i,j,row,col;
printf("the no of rows");
scanf("%d",&row);
printf("the no of col");
scanf("%d",&col);

int arr[row][col];

    printf("the rows and colums");
    for (i= 0;i<row;i++){
        for (j = 0;j<col;j++){
            printf("elements at [%d][%d] is",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}