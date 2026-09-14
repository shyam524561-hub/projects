#include <stdio.h>
#include <math.h>
int main(){
    double principal=0;
    double time=0;
    double rate=0;
    double amount=0;
    printf("Enter the Principal amount: ");
    scanf("%lf",&principal);
    printf("Enter The Time period: ");
    scanf("%lf",&time);
    printf("Enter the Rate of interest: ");
    scanf("%lf",&rate);
    amount = principal * rate * time;
    printf("THE SIMPLE INTERST FOR %.1lf YEARS IS %.3lf",time,amount);

}