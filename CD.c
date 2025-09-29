#include<stdio.h>

int main()
{
    int m,i;
    float x,p,val;
    printf("enter the initial deposit amount:");
    scanf("%f",&x);
    printf("\n enter annual percentage yield:");
    scanf("%f",&p);
    printf("\n enter maturity period(number of months):");
    scanf("%d",&m);

 printf("Month CD value:-");
 val=x;
    for(i=1;i<=m;i++)
    {
        val=val+(val*(p/1200));
        printf("\n %d. %f ",i,val);

    }

return 0;
}
