#include <stdio.h>

int main(){
    int l,b;
    printf("Enter the length and breadth of the rectangle:");
    scanf("%d %d", &l,&b);
    printf("The area of rectangle is: %d\n",l*b);
    printf("The Area of Rectangle is: %d",2*(l+b));
    return 0;
}