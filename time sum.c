#include<stdio.h>
struct time
{
 int hrs;
 int mins;
 int sec;
};
int main()
{ int rem;
    struct time t1;
        printf("enter first time:");
        scanf("%d %d %d",&t1.hrs,&t1.mins,&t1.sec);
      if(t1.mins>60)
      {
          rem=t1.mins/60;
          t1.mins=(t1.mins-60);
          t1.hrs=t1.hrs+rem;
      }
      if(t1.sec>60)
      {
          rem=t1.sec/60;
          t1.sec=(t1.sec-60);
          t1.mins=t1.mins+rem;
          }
          printf("\nfirst time:%d %d %d",t1.hrs,t1.mins,t1.sec);

    struct time t2;
        printf("\nenter second time:");
        scanf("%d %d %d",&t2.hrs,&t2.mins,&t2.sec);
         if(t2.mins>60)
      {
          rem=t2.mins/60;
          t2.mins=(t2.mins-60);
          t2.hrs=t2.hrs+rem;
      }
      if(t2.sec>60)
      {
          rem=t2.sec/60;
          t2.sec=(t2.sec-60);
          t2.mins=t2.mins+rem;
          }
          printf("\nsecond:%d %d %d",t2.hrs,t2.mins,t2.sec);

         struct time t3;
         t3.hrs=t2.hrs+t1.hrs;
         t3.mins=t1.mins+t2.mins;
         t3.sec=t2.sec+t1.sec;
         if(t3.mins>60)
      {
          rem=t3.mins/60;
          t3.mins=(t3.mins-60);
          t3.hrs=t3.hrs+rem;
      }
      if(t3.sec>60)
      {
          rem=t3.sec/60;
          t3.sec=(t3.sec-60);
          t3.mins=t3.mins+rem;
          }
          printf("\nresultant time:%d %d %d",t3.hrs,t3.mins,t3.sec);


return 0;
}
