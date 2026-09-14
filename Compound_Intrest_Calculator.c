#include <stdio.h>
#include <math.h>
int main(){
    double principal=0.0;
    double rate = 0.0;
    int years = 0;
    int timec = 0;
    double total = 0.0;
    
    printf("Enter Principal amount(P): ");
    scanf("%lf",&principal);
    
    printf("Enter Interest Rate: ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("Enter No of years: ");
    scanf("%d",&years);

    printf("Enter Times compunded per year(n): ");
    scanf("%d",&timec);

    total = principal * pow(1+ rate / timec,timec*years);
    printf("The Compound interest is : %.2lf",total);
    
    
    return 0;
}