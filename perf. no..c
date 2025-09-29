#include <stdio.h>
int main()
{
int sum=0, n, i;
printf("write number to verify:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(n%i==0)
    {
    sum=sum+i;
    }
}
if(sum==n)
{
printf("%d is a perfect number",n);

}
else
{
printf("%d is not a perfect number",n);4
}


return 0;
}
