#include<stdio.h>
int main()
{
int i=4,*p;
p=&i;
printf("%d\n",i);
printf("%d \n",*p);
*p=*p+1;
printf("%d",i);


return 0;
}
