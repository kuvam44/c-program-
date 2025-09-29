#include <stdio.h>

int main() {
    int cm;
    int feet;
    float inches;

    scanf("%d", &cm);


    // Add your code here
  float total_inches = cm/2.54;
  feet = total_inches/12;
  inches= total_inches-(feet*12);

    printf("%d %.2f", feet, inches);

    return 0;
}
