#include <stdio.h>
#include <math.h>

int main() {

    // float x = 9;

    //  x = sqrt(x);
    //  x = pow(x, 80);

    // x = round(x);
    // x = ceil(x);
    // x = floor(x);

    // x = abs(x);
    // x = log(x); // cos, tan

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    const double PI = 3.14159;

    printf("To calculate the area, enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);


    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);



    return 0;
}