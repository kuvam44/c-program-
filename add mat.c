#include<stdio.h>
int main()
{int a[2][2], A[2][2],r,c,i,j,P[2][2],s,k;
for(r=0;r<2;r++)
{
    for(c=0;c<2;c++)
    {
    scanf("%d",&a[r][c]);
    }
}
for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    for(r=0;r<2;r++)
    {
    for(c=0;c<2;c++)
    {
    scanf("%d",&A[r][c]);
    }
    }
     for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%d ",A[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    for(s=0;s<2;s++)
    {
    for(k=0;k<2;k++)
    {
    P[s][k]=a[s][k]+A[s][k];
    }

    }
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
           printf("%d ",P[i][j]);
       }
       printf("\n");
    }

return 0;
}
