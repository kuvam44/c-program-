#include<stdio.h>
int main()
{
char ar[8];
int i;
gets(ar);
printf("entered string is: %s",ar);

for(i=0;ar[i]!=NULL;i++);
printf("Length is %d ",i);
return 0;
}
