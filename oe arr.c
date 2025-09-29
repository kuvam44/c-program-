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

int oe(int *pr,int s)
{
    int i=0;
    while(i<s)
    {
    if(*(pr+i)%2==0)
    {
    *(pr+i)=0;
    }
    else
    {
    *(pr+i)=1;

}
    i++;}
return 0;
}
int main()
{
int n,ar[]={2,3,4,5,6,7,8,9};
n=sizeof(ar)/sizeof(ar[0]);
disp(ar,n);
oe(ar,n);
disp(ar,n);
return 0;
}
