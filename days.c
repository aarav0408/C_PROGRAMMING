#include <stdio.h>

int main(){
    int d,y,m;
    printf("Enter the number of days: ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    printf("%dy,%dm,%dd\n",y,m,d);
    return 0;
}