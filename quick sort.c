#include<stdio.h>
void swap(int* a,int* b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;


}
int posit(int a[],int lb,int ub)
{
int pivot=a[lb];
int start=lb;
int end=ub;
    while(start<end)
    {
    while(a[start]<=pivot)
    {
    start++;
    }
    while(a[end]>pivot)
    {
    end--;
    }
    if(start<end)
    {
    swap(&a[start],&a[end]);
    }
    }
    swap(&a[lb],&a[end]);
    return end;
}
void quick(int a[],int lb, int ub)
{
int loc;
if(lb<ub)
{
loc=posit(a,lb,ub);
quick(a,lb,loc-1);
quick(a,loc+1,ub);
}

}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
int ar[]={10,80,4,6,9,8,44},n;
n=sizeof(ar)/sizeof(ar[0]);
printf("orig array:");
printArray(ar,n);
quick(ar,0,n-1);
printf("sorted:");
printArray(ar,n);
return  0;
}
