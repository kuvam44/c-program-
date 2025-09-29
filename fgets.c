#include<stdio.h>
#include<stdlib.h>
char* ones(char *str)
{ int i;
for(i=0;str[i]!=NULL;i++)
{
if(str[i]=='0')
{str[i]='1';
}
else if(str[i]==1){

str[i]='0';
}
else
{
    break;
}
}
return str;
}

int main()
{
char *str=(char*)malloc(2);
char *inv;
printf("enter binary number:\n");
scanf("%s",str);
printf("%s\n",str);
inv=ones(str);
printf("%s\n",inv);

return 0;
}
