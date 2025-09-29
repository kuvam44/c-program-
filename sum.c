#include<stdio.h>
int main()
{
int i,x[5], sum=0;
printf("enter no.s:");
for(i=0;i<5;i++)
{
scanf("%d\n",&x[i]);
sum=sum+x[i];

}


printf("sum of no.=%d",sum);


return 0;
}
