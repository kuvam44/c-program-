#include<stdio.h>
int main()
{
int a,i,j,k,x;
printf("enter no. of lines:");
scanf("%d",&x);
for(i=1;i<=x;i++)
  {
  for(j=i;j<x;j++)
  printf(" ");
  for(k=1;k<=i/2;k++)
  printf("%d",k);
  for(a=i-1;a>i/2;a--)
  printf("%d",a);
  printf("\n");
  }

return 0;
}
