#include <stdio.h>
int sum(int x, int y)
{
   return(x+y);
}
int max(int x, int y)
{
    if(x>y)
    {
    return(x);
    }
    else
    {
        return(y);
    }

}
void OddEven(int c)
{
  if(c%2==0)
  {
      printf("%d is even",c);
  }
  else{
     printf("%d is odd",c);
  }
}

int main()
{
int j,k,res;
printf("give 2 numbers:");
scanf("%d %d",&j,&k);

res=sum(j,k);

printf("%d is the sum of 2 no.s\n",res);
printf("%d is the sum of 2 no.s\n",sum(3,k));
printf("%d is the Max of 2 no.s\n",max(j,k));
OddEven(4);
return 0;
}
