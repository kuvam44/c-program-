#include <stdio.h>
int main()
{
int j,i,x[10], rem, sum=0;
printf("enter 10 numbers:");

for(i=0;i<10;i++)
{
    scanf("%d",&x[i]);
}
for(i=0;i<10;i++)
{
    printf("x[%d]=%d\n",i,x[i]);
}
for(j=0;j<10;j++)
{
if(x[j]%2==0)
{
    sum=x[j]+sum;
}

}
printf("the sum of even numbers from the list is:%d",sum);
return 0;
}
