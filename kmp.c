#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free


void computeLPSArray(char* pattern, int M, int* lps) {
    int length = 0;
    lps[0] = 0;
    int i = 1;

    while (i < M) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
    }
}
}
}

void KMPSearch(char* text, char* pattern) {
    int N = strlen(text);
    int M = strlen(pattern);

    // Create LPS array
    int* lps = (int*)malloc(sizeof(int) * M);
    if (lps == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    computeLPSArray(pattern, M, lps);

    int i = 0;
    int j = 0;

    while (i < N) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == M) {
            printf("Found pattern at index %d\n", i - j);
            j = lps[j - 1];
        } else if (i < N && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    free(lps);
}

int main() {
    char text[] = "ABABBAKANTK";
    char pattern[] = "KANTK";

    printf("Text: %s\n", text);
    printf("Pattern: %s\n", pattern);
    printf("Searching for pattern in text using KMP:\n");
    KMPSearch(text, pattern);

    return 0;
}
