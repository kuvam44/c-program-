#include<stdio.h>
int sqr(int x)
{int l=0,h=x,mid,ans;
    while(h>=l)
    { mid=l+(h-l)/2;
    if(mid*mid==x)
        {return mid;}
    if(mid*mid>x)
    {
        ans=mid;
        h=mid-1;
    }
        else{l=mid+1;}
    }

    return ans;
}
int main()
{
int ans,x,l,h;
printf("square root of number:");
scanf("%d",&x);
ans= sqr(x);
printf("%d",ans);
return 0;
}
