#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str1=(char*)malloc(100);
char *str2=(char*)malloc(100);
int i,j,length;
fgets(str1,100,stdin);
printf("enter:%s",str1);
for(i=0;str1[i]!=NULL;i++);
i--;
length=i;
for(j=0;j<=length;j++,i--)
{
str2[j]=str1[i];
}
str2[j]='\0';
printf("reversed string:%s",str2);
return 0;
}
