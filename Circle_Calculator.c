#include <stdio.h>
#include <math.h>
int main(){
    
    double radius=0;
    double area=0;
    double surfacearea=0;
    double volume=0;
    const double pi=3.14;

    printf("Enter Radius: ");
    scanf("%lf",&radius);

    area = pi * pow(radius,2);
    surfacearea = 4 * pi* pow(radius,2);
    volume = (4.0/3.0) * pi * pow(radius,3);


    printf("Area of Circle: %lf\n",area);
    printf("SurfaceArea of Circle: %lf\n",surfacearea);
    printf("Volume of Circle: %lf\n",volume);

    return 0;
}