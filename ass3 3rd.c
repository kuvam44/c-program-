#include <stdio.h>

// Complete this function to check if a number is prime
// Return 1 if n is prime 0 if not

int is_prime(int n) {
  int i,rem;
  for (i=2;i<n;i++)
  {
      rem=n%i;
    if(rem==0)
    {return 0;}
    else
        continue;

  }

    return 1;
}

int main() {
    int n, num;
    scanf("%d", &n);

    int flag = 0;

    for (int i = 0; i < n; i++) {

      scanf("%d", &num);

      if (is_prime(num)) {

          if(flag == 0){
            	printf("%d", num);
      			flag = 1;
          }
          else{
            printf(" %d", num);
          }

        }
    }

    return 0;
}
