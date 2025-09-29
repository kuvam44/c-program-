#include<stdio.h>
int caps(char ch){
int x;
if(ch>96)
x=(int)ch-32;
else
    x=(int)ch+32;
return x;
}
int main()
{
char ch;
int out;
scanf("%c",&ch);
out=caps(ch);
printf("\n%c",out);


}
