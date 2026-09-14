#include <stdio.h>
int main(){
    char operation = '\0';
    double value1 = 0.0;
    double value2 = 0.0;

    printf("Enter the operation(+,-,*,/): ");
    scanf("%c",&operation);

    printf("Enter Value 1 = ");
    scanf("%lf",&value1);

    printf("Enter Value 2 = ");
    scanf("%lf",&value2); 

    switch(operation){
        case '+':
            printf("%.2lf",(value1+value2));
            break;

        case '-':
            printf("%.2lf",(value1-value2));
            break;

        case '*':
            printf("%.2lf",(value1*value2));
            break;

        case '/':
            printf("%.2lf",(value1/value2));
            break;
        
        default:
            printf("INVALID");

    }


}