#include<stdio.h>
#include<stdlib.h>
char *pln(char *ar)
{
int n=sizeof(ar);
int i;
char *rev=(char*)malloc(sizeof(char)*(n+1));

for(i=0;i<n;i++)
{
rev[i]=str[n-1-i];
}
rev[n]='NULL';
return rev;
}
int main()
{
char *ptr;
int a;
printf("enter no. of letters:");
scanf("%d",&a);
char *ptr=(char*)malloc(sizeof(char)*(n+1));

}
