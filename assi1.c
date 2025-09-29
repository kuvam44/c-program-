#include<stdio.h>
int main()
{
int a,b,c, val;
scanf("%d %d %d",&a,&b,&c);
if(a>b && a<c || a<b && a>c)
{
val=a;
}
  if(b>a && b<c || b<a && b>c)
  {
  val=b;
  }
   if(c>a && c<b || c<a && c>b)
  {
  val=c;
  }
printf("%d",val);

return 0;
}
