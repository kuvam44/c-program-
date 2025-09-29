#include<stdio.h>
int sum(int a,int b)
{
return (a+b);

}
int sub(int a,int b)
{
return(a-b);
}
int mult(int a,int b)
{
return (a*b);
}
int div(int a,int b)
{
return (a/b);
}
int mod(int a,int b)
{
return (a%b);
}
int main()
{int a, b, x, res;


do
{
printf("\nenter 2 numbers:");
scanf("%d%d",&a,&b);
printf("1 ADDITION\n 2 SUBTRACTION\n 3 MULTIPLICATION\n 4 DIVISION\n 5 MODULUS\n 6 EXIT\n");
scanf("%d",&x);
if (x==1)
{
res=sum(a,b);
printf("addition of 2 numbers is:%d",res);}
if (x==2)
{
res=sub(a,b);
printf("subtraction of 2 numbers is:%d",res);}
if(x==3)
{
res=mult(a,b);
printf("multiplication of 2 numbers is:%d",res);}
if(x==4)
{
res=div(a,b);
printf("division of 2 numbers is:%d",res);}
if (x==5)
{
res=mod(a,b);
printf("mod of 2 numbers is:%d",res);}

}while(x!=6);


return 0;
}
