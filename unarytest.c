#include <stdio.h>
int main()
{
int i=3,j=4,k,s; //i=3 k=?
k=i++; //i=4 k=3
printf("Use Post %d\n",k);
k=++i; //i=5 k=5
printf("Use Pre %d\n",i);
scanf("%d",&s);
for(;;)
{

    if(s==0)
    {
        break;
    }
    else{
        scanf("%d",&s);
    }
}

printf("S = %d",s);

return 0;
}
