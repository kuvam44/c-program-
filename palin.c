#include<stdio.h>
int ulta(int num)
{ int rem,rev=0;
while(num!=0)
{
rem=num%10;
rev=10*rev+rem;
num=num/10;

}
return rev;
}

int main()
{
int x, rev;
printf("enter any number:");
scanf("%d",&x);
rev=ulta(x);
if(rev==x)
printf("%d is a palindrom",rev);
else
printf("%d is not a palindrom",x);
return 0;
}
