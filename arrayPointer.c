#include<stdio.h>

int disp(int *ptr,int len)
{
    int i=0;
    while(i<len)
    {
        printf("%d\n",*(ptr+i));
        i++;
    }
    return 0;
}
int main()
{
    int l;
printf("Hello");
int arr[]={3,4,52,3,56,6};
//int *p=arr;
l=sizeof(arr)/sizeof(arr[0]);
disp(arr,l);
return 0;
}
