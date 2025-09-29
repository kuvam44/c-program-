#include<stdio.h>
int main(){
int n,a,sum=0;
printf("enter the no. today's day(0 is for sunday):");
scanf("%d",&n);
switch (n)
{
case 0:
printf("sunday");
case 1:
printf("monday");
case 2:
printf("tuesday");
case 3:
printf("wednesday");
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
default:
printf("invalid input");
}
printf("\n");

printf("enter number for future day");
scanf("%d",&a);
sum=n+a;
if(sum>6)
sum=sum%6-1;
switch (sum)
{
case 0:
printf("sunday");
case 1:
printf("monday");
case 2:
printf("tuesday");
case 3:
printf("wednesday");
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
default:
printf("invalid");
}
return 0;
}
