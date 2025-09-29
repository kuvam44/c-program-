#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int rows;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < (rows - 1 - i); j++) {
            printf("    "); // Adjust spacing as needed
        }

        // Print ascending powers of 2
        for (int k = 0; k <= i; k++) {
            printf("%-4.0f", pow(2, k));
        }

        // Print descending powers of 2 (excluding the peak)
        for (int l = i - 1; l >= 0; l--) {
            printf("%-4.0f", pow(2, l));
        }
        printf("\n");
    }

    return 0;
}
