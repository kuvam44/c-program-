#include<stdio.h>
int decomp(double x,long *intpart,double *fracpart)
{

*intpart= (long)x;
*fracpart= x-*intpart;
//printf("\n%ld %lf",intpart,fracpart);
}

int main()
{
double x,f=0.00;
long i=0;
scanf("%lf",&x);
decomp(x,&i,&f);
printf("\n %ld %lf",i,f);


}
