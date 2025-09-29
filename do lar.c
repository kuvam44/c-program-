#include<stdio.h>
int main()
{
int x,large;
printf("enter a number:");
scanf("%d",&x);
large=x;
do
{
printf("enter a number:");
scanf("%d",&x);

if(x>large)
{
large=x;
}
else
{continue;}

}
while(x>0);
printf("%d is the largest number",large);


return 0;
}
