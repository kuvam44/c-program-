#include<stdio.h>
int fac(int x)
{
if(x==0||x==1)
    return 1;
else
return x*fac(x-1);
}
int main()
{
    int x=5,ans;
    ans=fac(x);
    printf("%d",ans);
return 0;
}
