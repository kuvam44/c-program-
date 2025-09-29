#include<stdio.h>
struct empl{
char name[50];
char aadhaar[12];
int pay;

};
int main()
{
struct empl E1={"xyz","122334564444","400000"};
struct empl E2={"pqr","646488880022","880000"};
printf("%c\n, %s\n, %d\n",E1.name,E1.aadhaar ,E1.pay);
printf("%c\n, %s\n, %d\n",E2.name,E2.aadhaar ,E2.pay);


return 0;
}
