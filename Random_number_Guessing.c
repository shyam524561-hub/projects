#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Welcome to the Random Number Guseesing Game\n");
    printf("Your Number Starts Form 1 and ends with 6\n");
    printf("YOU HAVE 5 TRIES\n");

    srand(time(NULL));

    int min = 1;
    int max = 6;

    int randomnum = (rand() % (max - min + 1)) + min;
    int i=1;
    int j =4;
    while(i<=5)
    {
        printf("Enter Your Guess: ");
        int a;
        scanf("%d",&a);
        if (j==0){
            printf("You Losse");
            break;
        }
        if (a==randomnum)
        {
            printf("Your Correct");
            printf("You WON");
            break;
        }
        else
        {
            printf("Your Wrong\n");
            printf("You have %d more tries\n",j);
            j-=1;
            
        }
        
    }
    return 0;
}