#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum=0;
printf("enter order of matrix:");
scanf("%d%d",&m,&n);
for (i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
printf("first matrix is:");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("enter order of matrix:");
scanf("%d%d",&p,&q);
for (i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
    scanf("%d",&b[i][j]);
    }
}
printf("second matrix is:");
    for(i=0;i<p;i++)
    {
       for(j=0;j<q;j++)
       {
           printf("%d ",b[i][j]);
       }
       printf("\n");
    }
    if(n=!p)
    {
        printf("can not multiply");
    }
    else{
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)

         {sum=0;

            for (k=0;k<m;k++)
            {

                sum=sum+a[i][k]*b[k][j];

            }

            printf("%d sum = ",sum);

                c[i][j]=sum;

        }
        }
        printf("product matrix is:");


    for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
       {
           printf("%d ",c[i][j]);
       }
       printf("\n");
        }
        }







return 0;
}
