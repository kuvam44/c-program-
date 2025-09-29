#include <stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int i,x[10], y,rem,t=0 ;
printf("enter 5 numbers:");

for(i=0;i<5;i++)
{
    scanf("%d",&x[i]);
}
for(y=0;y<5;y++)
{
    t=0;
    for(i=2;i<=sqrt(x[y]);i++)
    {
      rem=x[y]%i;
        if(rem==0)
        {
           t=1;
        }
    }
if(t==0)
{
    printf("x[%d] is prime\n",y);
}
else{
      printf("x[%d] is not prime\n",y);
}
}



return 0;
}
