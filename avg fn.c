#include <stdio.h>
float avg(int a,int b,int c)
{
return( (a+b+c)/3.0);
}
int main()
{
int x,y,z;
printf("enter 3 numbers:");
scanf("%d %d %d",&x,&y,&z);
printf("average :%f",avg(x,y,z));

return 0;
}
