#include<stdio.h>
int main()
{
int num,x,i,large=0;
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&num);
if(num>large)
{
large=num;
}

}

printf("%d",large);


return 0;
}
