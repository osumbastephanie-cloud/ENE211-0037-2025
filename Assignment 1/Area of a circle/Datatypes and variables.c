#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Programm to calc area
    double area;
   const double Pi = 3.142;
    double r;
    // request radius
    printf("Please input radius");
    scanf("%lf",&r);
    area = Pi*r*r;
    printf("The area is %lf",area);
    return 0;

}
