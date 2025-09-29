#include<stdio.h>
int main()
{
int count=0,val, input;
scanf("%d",&input);

do{
        val=input;
scanf("%d",&input);


if (val==input)
  {
  continue;
  }
  else
  {
      count++;
  }


}while(input!=-1);
printf("%d",count);

return 0;
}
