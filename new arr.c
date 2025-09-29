#include<stdio.h>
int disp(int *ptr,int len)
{
    int i=0;
    while(i<len)
    {
        printf("%d\t",*(ptr+i));
        i++;
    }
    return 0;
}
int* oe(int ar[],int s)
    {
    int *new1,i=0;

    while(i<s)
    {
    if(ar[i]%2==0)
    {
        new1[i]=0;
    }
    else
    {
        new1[i]=1;
    }
    i++;
    }
   return new1;
    }
    int main()
    {
   int  ar[]={2,3,4,5,6,7,8},size;
   size=sizeof(ar)/sizeof(ar[0]);
    disp(ar,size);
    int* a=oe(ar,size);
    disp(a,size);

    return 0;
    }
