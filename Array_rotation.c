#include <stdio.h>
int main()
{
    //asks for the number of elements in the array
    int num=0;
    printf("Enter No of Elements in Array: ");
    scanf("%d",&num);
    
    // array init
    int arr[num];

    //Array Input
    for(int i=0;i<num;i++)
    {
        printf("Enter the Element: ");
        scanf("%d",&arr[i]);
    }

    // ask for left or right
    int side=0;
    printf("Enter 1 for left or 2 for right: ");
    scanf("%d",&side);

    //Left Side Shift
    if (side == 1)
    {
        int position = 0;
        // ask for Number of position to move
        printf("Number of Position to move: ");
        scanf("%d",&position);

        for(int i=0;i<position;i++)
        {
            int firstnum = arr[0];
            int j = 0;
            while(side == 1)
            {
                
                if(j==num)
                {
                    break;
                }
                
                else
                {
                arr[j] = arr[j+1];
                j++;
                }
                if(j==(num-1))
                {
                    int secondnum = arr[0];
                    arr[num-1] = secondnum;
                }

            }
            arr[num-1] = firstnum;
        }
    }
    //Right Side Shift
    else if(side == 2)
    {
        int position = 0;
        printf("Number of positions to move: ");
        scanf("%d", &position);

        for (int i = 0; i < position; i++)
        {
            int last = arr[num - 1];

            for (int j = num - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = last;
        }
    }

    //prints the new array
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}