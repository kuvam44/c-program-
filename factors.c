#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
printf("enter number to know its factors:");
scanf("%d",&n);
int *a=(int*)malloc(n*sizeof(int));
int count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
a[count++]=i;

}
}
for (int i = 0; i < count; i++)
    {
        printf("%d\t", a[i]);
    }

free(a);


return 0;
}
