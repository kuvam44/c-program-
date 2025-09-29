#include<stdio.h>
int ascii(char ch)
{
    return (int)ch;
}
int main()
{
    int code;
    char ch;
printf("enter any char:");
scanf("%c",&ch);

code=ascii(ch);
printf("%d",(code));

}



