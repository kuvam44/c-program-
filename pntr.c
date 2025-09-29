#include<stdio.h>
int main()
{
int i=4,*j;
j=&i;
printf("\nAddress of i=%u",&i);
printf("\nAddress of i=%u",j);
printf("\nAddress of j=%u",&j);
printf("\nAddress of j=%d",j);
printf("\nAddress of i=%d",*(&i));
printf("\nAddress of i=%d",*j);


return 0;

}
