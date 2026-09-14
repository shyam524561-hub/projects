#include <stdio.h>
int main(){
    int a=0;
    printf("Welcome to the Weight Convetor\n");
    printf("Enter 1 for KG to Pounds (or) Enter 2 for Pounds to KG: ");
    scanf("%d",&a);
    double weight = 0;
    if(a==1){
        printf("Enter Weight: ");
        scanf("%lf",&weight);
        weight = weight * 2.205;
        printf("%.2lf Pounds",weight);
    }
    else{
        printf("Enter Weight: ");
        scanf("%lf",&weight);
        weight = weight / 2.205;
        printf("%.2lf Kg",weight);
    }
}