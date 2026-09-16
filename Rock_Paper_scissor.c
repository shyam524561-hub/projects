#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int num = 0;
    printf("First to Score 3 Points to Win\n");
    srand(time(NULL));

    int min = 1;
    int max = 3;

    
    char move[20] = "\0";

    int C_points = 0;
    int H_points = 0;
    
    

    int i = 0;

    while(i<=3)
    {
        printf("Enter Your Move: ");
        scanf("%s",&move);
        num = (rand() % (max - min + 1)) + min;
      
        if (num == 1 && strcmp(move, "rock") == 0)
        {
            printf("Tie try again\n");
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 1 && strcmp(move, "paper") == 0)
        {
            printf("You Won\n");
            H_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 1 && strcmp(move, "scissor") == 0)
        {
            printf("You Lost\n");
            C_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 2 && strcmp(move, "rock") == 0)
        {
            printf("You Lost\n");
            C_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 2 && strcmp(move, "paper") == 0)
        {
            printf("Tie try again\n");
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 2 && strcmp(move, "scissor") == 0)
        {
            printf("You Lost\n");
            C_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 3 && strcmp(move, "rock") == 0)
        {
            printf("You Won\n");
            H_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 3 && strcmp(move, "paper") == 0)
        {
            printf("You Won\n");
            H_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        else if (num == 3 && strcmp(move, "scissor") == 0)
        {
            printf("You Won\n");
            H_points += 1;
            i += 1;
            printf("Computer points: %d\n",C_points);
            printf("Your points: %d\n",H_points);
        }

        if (i>3)
        {
            if(C_points>=3)
            {
                printf("Computer points: %d\n",C_points);
                printf("Your points: %d\n",H_points);
                printf("Computer Won\n");
            }
            else
            {
                printf("Computer points: %d\n",C_points);
                printf("Your points: %d\n",H_points);
                printf("You Won\n");
            }
        }

    }


}