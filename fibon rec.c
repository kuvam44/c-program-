#include<stdio.h>
int ser(int n)
{
if(n<=1)
return n;
return ser(n-1)+ser(n-2);

}
int main()
{
int n,i;
printf("enter required length of the series:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d\t",ser(i));

}


return 0;
}
