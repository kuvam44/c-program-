#include<stdio.h>
struct car{
char name[40];
int num;

};
int main()
{ struct car c1;
    printf("enter name of the car");
    scanf("%s", &c1.name);
    printf("enter no.:");
    scanf("%d", &c1.num);
    printf("\n%s", c1.name);
    printf("%d", c1.num);

return 0;
}
