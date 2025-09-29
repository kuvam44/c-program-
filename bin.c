#include<stdio.h>
int main()
{
  int mid,low,tgt, high, array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  high= sizeof(array)-1;
  low=0;
  printf("enter target:");
  scanf("%d",&tgt);

  while(low<=high)
  {
  mid= low+(high-low)/2;
  if(array[mid]=tgt)
  {
  printf("%d is present at %d",tgt,array[mid]);
break;
  }
  else
  {
  continue;
  }

  }




return 0;
}
