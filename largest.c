#include<stdio.h>
int main()
{
int x,largest;

printf("enter a number:");
scanf("%d",&x);
largest=x;
for(;x>0;)
{
printf("enter a number:");
scanf("%d",&x);
if(x>largest)
{
    largest=x;
//continue;
}
else
{continue;}

}
printf("%d is the largest number",largest);
return 0;
}
