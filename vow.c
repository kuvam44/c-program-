#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str=(char*)malloc(100);
int i,count=0;
printf("enter any sentence:");
fgets(str,100,stdin);
printf("\n%s",str);
for(i=0;str[i]!=NULL;i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        count++;
    }


}

printf("%d is the no. of vowels in your sentence:",count);


return 0;
}
