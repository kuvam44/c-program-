#include <stdio.h>
#include<math.h>
int main()
{
int n,i,rem ;
printf("enter number to verify wether prime or not");
scanf("%d",&n);
for(i=2;i<= sqrt(n);i++)
{
rem==n%i;
}
if(rem==0)
{
printf("%d is a composite number",n);
}
else
{
printf("%d is a prime number",n);
}

return 0;
}
