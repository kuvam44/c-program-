#include  <stdio.h>
int main()
{
int n[5]={44,55,2,46,88};
int i,x;
printf("enter 5 no.s:");
x=n[i];
//for(i=0;i<5;i++){
//scanf("%d",&n[i]);


for(i=0;i<5;i++)
{
if(x<n[i])
x=n[i];
}
printf("LARGEST NO. IS:%d",x);
return 0;
}
