
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a portion of the string
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[]) {
    int len = strlen(str);

    // Step 1: Reverse the whole string
    reverse(str, 0, len - 1);

    // Step 2: Reverse each word in the reversed string
    int i = 0, start;
    while (i < len) {
        // Skip spaces
        while (i < len && isspace(str[i])) i++;

        start = i;

        // Find the end of the word
        while (i < len && !isspace(str[i])) i++;

        reverse(str, start, i - 1);
      //  printf("%s",str);
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Reversed order of words: %s\n", str);

    return 0;
}


