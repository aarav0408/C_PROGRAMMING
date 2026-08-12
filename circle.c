//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
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