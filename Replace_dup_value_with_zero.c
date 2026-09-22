#include <stdio.h>
int main()
{
    //get number of elements in the array
    int num;
    printf("Enter number of elements in the array: ");
    scanf("%d",&num);

    //init array
    int arr[num];

    //array value
    for(int i=0;i<num;i++){
        printf("Enter Array ELement: ");
        scanf("%d",&arr[i]);
    }
    //check for duplication
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j] = 0;
            }
        }
    }
    //print the new array after replaceing dup value by zero
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }

}