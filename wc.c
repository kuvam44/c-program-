#include <stdio.h>

void main(){

    //Variables
    int numLines = 0;
    int numWords = 0;
    int numChar = 0;
    int c;
    int prev=' '; // The previous character of c
char *str="adsd fhgh hj";
    // While we have not reached the end
   // while ((c=getchar()) != EOF)
    while(*str!=NULL)
    {

        // Count # of lines
        if (c == '\n'){
            numLines ++;
        }

        // Count # of words
        if (c == ' ' || c =='\t' || c == '\n'){
            // Account for consecutive spaces, tabs and a new line
            if (prev!=' ' && prev!='\t' && prev!='\n'){
                numWords++;
            }
        }

        // Counts # of characters
        // Make prev equal c before updating c
        numChar++;
        prev=c;
        *str++;
    }

    /*Outputs the # of lines, words and
    characters up to the EOF respectfully.*/
    printf("Number of lines: %d\n", numLines);
    printf("Number of words: %d\n", numWords);
    printf("Number of characters: %d\n", numChar);
}
