#include<stdio.h>
int gcd(int a,int b)
{
int temp;
while(b>0)
{
temp=a%b;
a=b;
b=temp;
}
return a;
}
int cp(int a)
{
    int i,x;
    for(i=2;i<a;i++)
    {
        x=gcd(a,i);
        if(x==1)
            return i;
    }
}
int main()
{
int a,x,y;
printf("enter number to find it co prime:");
scanf("%d",&x);
if(x==1)
printf("invalid input");
//else{
//for(y=2;y<x;y++)
//{
//a=gcd(x,y);
//if(a==1)
y=cp(x);
printf("%d and %d are co primes",x,y);




return 0;
}
