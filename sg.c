#include <stdio.h>

int main()
 {
    int N;
    int i;

    printf("Enter a positive number (N): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }


    for (i = 1; i <= N; i++) {
        printf(" %d\n", i * i);
    }

    return 0;
}
