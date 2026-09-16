#include <stdio.h>
int main()
{
    int elements;
    printf("Welcome To The Student Grade Calculator\n");
    printf("Number Of Subjects You Want To Enter: ");
    scanf("%d",&elements);
     
    int subjects[elements];

    for(int i=0;i<elements;i++)
    {
        int mark = 0;
        printf("Enter Mark of Subject %d: ",(i+1));
        scanf("%d",&mark);

        subjects[i] = mark;
    }
    int average = 0;
    for(int i=0;i<elements;i++)
    {
        average = average + subjects[i];
    }

    average = average / elements;

    if (average >= 90)
    {
        printf("Grade: A\n");
        printf("Your Average Score is: %d",average);
    }
    else if (average >= 80)
    {
        printf("Grade: B\n");
        printf("Your Average Score is: %d",average);
    }
    else if (average >= 70)
    {
        printf("Grade: C\n");
        printf("Your Average Score is: %d",average);
    }
    else if (average >= 60)
    {
        printf("Grade: D\n");
        printf("Your Average Score is: %d",average);
    }
    else
    {
        printf("Grade: F\n");
        printf("Your Average Score is: %d",average);
    }
}