#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,r1,r2;
printf("enter values of a b and c respectively:");
scanf("%d%d%d",&a,&b,&c);
r1=((-b) + sqrt((b*b)-(4*a*c)))/(2*a);
r2=((-b) - sqrt((b*b)-(4*a*c)))/(2*a);
printf("two roots of the equation is:%d and %d",r1,r2);
return 0;
}
