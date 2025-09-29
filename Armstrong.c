#include <stdio.h>
#include<math.h>
int main()
{
int x, i, p, rem ,sum=0, t;
printf("enter number for verification:");
scanf("%d",&x);
p = log10(x)+1;
//printf("%d",p);
for(i=x; i>0; i=i/10)
{
rem=i%10;
t=pow(rem,p);
sum=sum+t;
}
if(sum==x)
{
    printf("%d is an armstrong number.",x);
}
else
{
     printf("%d is not an armstrong number.",x);

}

return 0;
}
