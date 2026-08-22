#include <stdio.h>

int main(){
    int month;
    printf("Enter the month number: ");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("January - 31Days");
        break;
        case 2:
        printf("February - 28Days");
        break;
        case 3:
        printf("March - 31Days");
        break;
        case 4:
        printf("April - 30Days");
        break;
        case 5:
        printf("May - 31Days");
        break;
        case 6:
        printf("June - 30Days");
        break;
        case 7:
        printf("july - 31Days");
        break;
        case 8:
        printf("august - 31Days");
        break;
        case 9:
        printf("september - 30Days");
        break;
        case 10:
        printf("october - 31Days");
        break;
        case 11:
        printf("november - 30Days");
        break;
        case 12:
        printf("December - 31Days");
        break;
        default:
        printf("invalid month number");
    }
    return 0;
}