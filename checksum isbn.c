#include<stdio.h>
#include<stdlib.h>
int itc(char ch)
{
    int i;
   i=
}
int main()
{
    int val,sum,i,j,count=0;
char *str1=(char*)malloc(100);
printf("enter 12 digit code:");
fgets(str1,100,stdin);
for(i=0;str1[i]!=NULL;i++)
{
    count++;
}
if (count!=13)
{
    printf("invalid input");
    return -1;
}
else{
    for (j=0;str1[j]!=NULL;j++)
    {
        if(j==0||j%2==0)
        {
            sum=sum+str1[j];
        }
        else{
            sum=sum+3*str1[j];
        }


    }
val=(10-(sum%10))%10;
if(val==10)
    str1[13]=0;
else
    str1[13]=val;
printf("%s",str1);}
return 0;
}
