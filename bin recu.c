#include<stdio.h>
int bin(int ar[],int l,int h,int val)
{
    if(h>=l)
{int mid=l+(h-l)/2;

if(ar[mid]==val)
{
return(mid);
}
if(ar[mid]<val)
{return bin(ar,mid+1,h,val);}
//if(ar[mid]>val)
return bin(ar,l,mid-1,val);
}
return -1;
}
int main()
{
int x,ar[]={1,4,8,10,16,24,30,36,40,44,50,52,60,80,100},size,res;
size=sizeof(ar)/sizeof(ar[0]);
printf("enter no. to locate:");
scanf("%d",&x);
res=bin(ar,0,size-1,x);
if(res==-1)
printf("not present");
else{
printf("%d is located at %d",x,res);
}


return 0;
 }
