#include<stdio.h>
#include<stdlib.h>
void swap(char *a,char *b)
{
    char temp;
temp=*a;
*a= *b;
*b=temp;
}
void permute(char *c,int l,int h)
{ int i;
    if(l==h)
    {
        printf("%s\n",c);
    }
    else
    {
     for(i=l;i<=h;i++)
     {


            swap((c+l),(c+i));
            permute(c,l+1,h);

            swap((c+l),(c+i));
     }
    }
}
int main()
{

int n;
printf("enter number of digits:");
scanf("%d",&n);
char *str=(char*)malloc(n*sizeof(char));
printf("enter string:");
scanf("%s",str);
permute(str,0,n-1);

return 0;
}
