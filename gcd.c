#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter 2 numbers:");
scanf("%d %d",&a,&b);
while(b>0)
{
temp=a%b;
printf("%d\n",temp);
a=b;
b=temp;
printf("Value of b %d\n",b);
}

printf("%d is the gcd",a);

return 0;
}
