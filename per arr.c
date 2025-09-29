#include <stdio.h>
int main()
{
int i,x[10], y,rem,sum=0 ;
printf("enter 5 numbers:");

for(i=0;i<5;i++)
{
    scanf("%d",&x[i]);
}

for(y=0;y<5;y++)
{
sum=0;
    for(i=0;i<x[y];i++)
    {
        rem=x[y]%i;


        if(rem==0)
        {
           sum=sum+i;
        }
    }
if(sum==x[y])
{
    printf("x[%d] is perefect no.\n",y);
}
else{
      printf("x[%d] is not a perfect no.\n",y);
}
}



return 0;
}
