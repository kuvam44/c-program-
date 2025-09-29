#include<stdio.h>
int main()
{
int x[5],i;
printf("enter 5 no.s :");
for(i=0;i<5;i++)
{
scanf("%d",&x[i]);
}
printf("in reverse:");
for(i=9;i>=0;i--)
{
printf("%d\n",x[i]);
}




return 0;
}
