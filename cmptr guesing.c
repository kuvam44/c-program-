#include<stdio.h>
#include <stdlib.h>
#include <time.h> // Not strictly necessary for this computer guessing, but good practice for random numbers
#include <unistd.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf(".");
        sleep(0.1);
    }
sleep(1000);
int max=100,min=1,guess;

char ans;
do
{
guess=min+(max-min)/2;
printf("is your number %d\n(press h if no. is higher, l if lower and c for coreect guess)",guess);

scanf(" %c",&ans);
//ans=getchar();

//printf("\n\n%c\n\n",ans);
//if(ans=='c')
  //  {
    //    printf("i've guessed your number");
      //  break;
    //}
if(ans=='h')
    {
        min=guess+1;

    }
else if(ans=='l')
    {
        max=guess-1;

    }
    else {
            printf("Invalid input. Please enter 'h', 'l', or 'c'.\n");

        }



}while(ans!='c');
printf("i've guessed your number");


return 0;
}


/*int main() {
    int min = 1;
    int max = 100;
    int guess;
    char response;
    int attempts = 0;

    printf("Think of a number between %d and %d. I will try to guess it!\n", min, max);

    do {
        attempts++;
        guess = min + (max - min) / 2; // Calculate the middle point as the guess
        printf("Is your number %d? (h for higher, l for lower, c for correct): ", guess);
        scanf(" %c", &response); // Notice the space before %c to consume leftover newline

        if (response == 'h' || response == 'H') {
            min = guess + 1; // Adjust the lower bound
        } else if (response == 'l' || response == 'L') {
            max = guess - 1; // Adjust the upper bound
        } else if (response == 'c' || response == 'C') {
            printf("Great! I guessed your number %d in %d attempts!\n", guess, attempts);
            break; // Exit the loop if correct
        } else {
            printf("Invalid input. Please enter 'h', 'l', or 'c'.\n");
            attempts--; // Don't count invalid input as an attempt
        }

        if (min > max) { // Check for invalid range (e.g., user lied)
            printf("It seems there's an issue with the range. Did you provide consistent hints?\n");
            break;
        }

    } while (response != 'c' && response != 'C');

    return 0;
}*/
