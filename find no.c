#include <stdio.h>
int main()
{
int x[10], k,i;
printf("enter 5 no.s:");
for(i=0;i<5;i++)
{
    scanf("%d",&x[i]);
}

printf("enter no. to find:");
scanf("%d",&k);
for(i=0;i<5;i++)
{
if(x[i]==k)
{
printf("the no. you want is located at x[%d]=%d",i,k);
return 0;
}
else
{
printf("the no. is not present");
}



}




return 0;
}
