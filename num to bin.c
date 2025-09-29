#include<stdio.h>
int ulta(int num)
{int rem,rev=0;
while(num!=0)
{
rem=num%10;
rev=10*rev+rem;
num=num/10;

}
return rev;
}
int bin(int num)
{
int rem,mac=0;
while(num!=0){
rem=num%2;
//printf("%d",rem);
mac=10*mac+rem;

num=num/2;}
if(mac%10==0)
    printf("0");
return mac;
}
int main()
{
int x,mach,rev;
printf("enter number to convert into binary");
scanf("%d",&x);
mach=bin(x);
rev=ulta(mach);
printf("%d is the binary output",rev);
}
