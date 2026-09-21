#include <stdio.h>
int main()
{
    //Getting number of elements in the array
    int nums;
    printf("Number of element in the array: ");
    scanf("%d",&nums);

    //init the array
    int arr[nums];

    //GEtting array inputs
    for(int i=0;i<nums;i++)
    {
        printf("Enter the array element: ");
        scanf("%d",&arr[i]);
    }

    //setting an random number as large number in the array
    int large = arr[0];

    //finding the largest number in the array
    for (int i = 0;i<nums;i++)
    {
        if (arr[i]>=large)
        {
            large = arr[i];
        }
    }

    //setting another number as the second large number
    int secondl = arr[0];

    //finding the second largest number in the array
    for(int i = 0;i<nums;i++)
    {
        if(arr[i]>secondl && arr[i]<large)
        {
            secondl = arr[i];
        }
    }
    

    //finding the smallest number in the array
    int smallest = arr[0];

    //Finding the smallest number in the array
    for (int i = 0;i<nums;i++)
    {
        if (arr[i]<=smallest)
        {
            smallest = arr[i];
        }
    }

    //setting another number as the second smallest number
    int secondS = large;

    //Finding the second smallest element in the array
    for(int i = 0;i<nums;i++)
    {
        if(arr[i]<=secondS && arr[i]>smallest)
        {
            secondS = arr[i];
        }
    }
    // printing the second largest number
    printf("Second Largest Element in the Array is %d\n",secondl);
    
    // printing the second smallest number
    printf("Second Smallest Element in the Array is %d",secondS);
    return 0;
}