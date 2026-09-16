#include <stdio.h>
int main()
{
    int option=0;
    int D_pin = 4242;
    int U_pin = 0;

    printf("1. View Current Account Balance\n");
    printf("2. WithDraw Cash\n");
    printf("3. Deposit Cash\n");
    printf("4. View Savings Account Balance\n");
    
    scanf("%d",&option);

    switch(option){
        case 1:
            printf("Enter Pin: ");
            scanf("%d",&U_pin);
            if(U_pin == D_pin){
                printf("Rs. XXX32");
            }
            else{
                printf("Wrong PIN");
            }
            break;
        
        case 2:
            printf("Enter Pin: ");
            scanf("%d",&U_pin);
            if(U_pin == D_pin){
                int a=0;
                printf("Enter amount: ");
                scanf("%d",&a);
                printf("Amount WithDrawn Sucessfully");
            }
            else{
                printf("Wrong PIN");
            }
            break;
        
        case 3:
            printf("Enter Pin: ");
            scanf("%d",&U_pin);
            if(U_pin == D_pin){
                int a=0;
                printf("Enter amount: ");
                scanf("%d",&a);
                printf("Amount Deposited Sucessfully");
            }
            else{
                printf("Wrong PIN");
            }
            break;

        case 4:
            printf("Enter Pin: ");
            scanf("%d",&U_pin);
            if(U_pin == D_pin){
                printf("Rs. XXXXX50");
            }
            else{
                printf("Wrong PIN");
            }
            break;
        
        default:
            printf("No Choice is There");
            break;
    }
}