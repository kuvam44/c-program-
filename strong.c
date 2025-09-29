#include<stdio.h>
int fac(int x)
{
if(x==0||x==1)
    return 1;
else
return x*fac(x-1);
}
    int str(int x)
    {
    int strong=0,rem,num=x;
    while(num!=0)
    {
        rem=num%10;
        strong=strong+fac(rem);
        num=num/10;
    }
        if(strong==x)
          return strong;
        else
            return -1;
    }
    int main()
    {
        int x,ans;

        printf("enter number");
        scanf("%d",&x);
        ans=str(x);
        if(ans!=-1)
        printf("%d is a strong number",ans);
        else
         printf("the number is not a strong number");


       return 0;
    }
