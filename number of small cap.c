#include<stdio.h>
#include<stdlib.h>
int ascii(char ch)
{
    //printf("\n%d",ch);
    return (int)ch;
}
int main()
{



    int i,cap=0,small=0,digit=0,spec=0,code;
    char *str=(char*)malloc(108);
       printf("enter:");
       fgets(str,108,stdin);
       printf("%s\n",str);
    for (i=0;str[i]!=NULL;i++)

      {
         // printf("\n%c",str[i]);
           code=ascii(str[i]);
           //printf("\n%c",str[i]);
     if(code>96&&code<123)
     {
     small++;
     }
     else if(code>64&&code<91)
     cap++;
     else if(code>47&&code<58)
     digit++;
     else
      spec++;


  }
  printf("number of small letters:%d\n",small);
  printf("number of capital letters:%d\n",cap);
  printf("number of digits:%d\n",digit);
  printf("number of special characters:%d\n",spec);

return 0;
}
