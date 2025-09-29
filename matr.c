#include<stdio.h>
int main()
{
    int j,i,r,c,;
    int a[3][3];
    for(r=0;r<3;r++)
    {
    for(c=0;c<3;c++)
    {
    scanf("%d",&a[r][c]);
    }

    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
    }



return 0;
}
