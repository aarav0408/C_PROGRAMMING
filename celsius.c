#include <stdio.h>

int main(){
    int c,f;
    printf("Enter the temperature in celsius: ");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("The Temp in Fahrenheit is: %d",f);
    return 0;
}