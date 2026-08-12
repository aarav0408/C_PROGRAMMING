#include <stdio.h>

int main(){
    float r,Area,Circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    Circumference=2*3.14*r;
    Area=3.14*r*r;
    printf("AREA=%.2f\nCIRCUMFERENCE=%.2f\n",Area,Circumference);
    return 0;
}