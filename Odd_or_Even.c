#include <stdio.h>
int main(){
    int num;
    printf("Enter Your Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Your Number is Even");
    }
    else{
        printf("Your Number is Odd");
    }
}