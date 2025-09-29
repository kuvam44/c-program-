#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int number=(rand()%100)+1;
int x,guesses;
printf("guess the no. between 1 and 100:");
do{
        scanf("%d",&x);
if(x==number)
{
    printf("congratulations you guessed it right");
}
if(x>number)
{
  printf("guess a lower no.");

}
if(x<number)
{
    printf("guess a higher no.");
}
}while(x!=number);

return 0;
}
