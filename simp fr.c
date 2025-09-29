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
return(a);
}
int main()
{
int num,den,x,y;
printf("enter a fraction to reduce to its lowest form:");
scanf("%d/%d",&x,&y);
num=x/(gcd(x,y));
den=y/(gcd(x,y));
printf("standard form:%d/%d",num,den);
return 0;

}
