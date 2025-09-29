#include<stdio.h>
int bin(int ar[],int size,int aim)
{
    int high,low,mid;
   high=size-1;
   low=0;
   while(low<=high)
   {
     int mid=low+(high-low)/2;
     if (ar[mid]==aim)
     return mid;

   if(ar[mid]>aim)
   {
       high=mid-1;
   }
   else
   {
       low=mid+1;
   }


}
return -1;
}
int main()
{
    int ar[]={2,4,8,12,16,24,36,44,50,60,78,80};
    int aim,size,val;
    size=sizeof(ar)/sizeof(ar[0]);
    printf("enter value to find:");
    scanf("%d",&aim);
    val=bin(ar,size,aim);

    printf("%d is located at %d",aim,val);
}
