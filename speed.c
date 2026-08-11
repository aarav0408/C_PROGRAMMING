#include <stdio.h>

int main(){
    float d,t,s;
    printf("Enter the distance and time: ");
    scanf("%f %f",&d,&t);
    s=d/t;
    printf("The speed is: %f\n",s);
    return 0;
}