#include<stdio.h>
int main()
{
long pay;
char adh[12],ar[100],nm[50];

printf("enter name of the employee:%s \n",nm);
gets(nm);
printf("enter your address:%s\n",ar);
gets(ar);
printf("enter your aadhaar number:%s\n",adh);
gets(adh);
printf("enter your monthly pay:");
scanf("%ld",&pay);
return 0;
}
