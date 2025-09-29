#include<stdio.h>
#include<stdlib.h>
int main()
{
int r,c,i,j;
printf("enter rows:")
scanf("%d",&r);
printf("enter col:");
scanf("%d",&c);
int **matrix;
matrix=(int**)malloc(r*sizeof(int*));
 for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(c * sizeof(int));}
 for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("%d ",matrix[i][j]);
       }
       printf("\n");
    }

}
