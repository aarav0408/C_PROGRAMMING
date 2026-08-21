//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main(){
    float selling_price,cost_price,profit,profit_percenatge,loss,loss_percentage;
    printf("Enter the cost price ans selling price:");
    scanf("%f %f",&cost_price,&selling_price);
    if(selling_price>cost_price){
        profit=selling_price-cost_price;
        profit_percenatge=(profit/cost_price)*100;
        printf("The profit percentage is %.2f%",profit_percenatge);
    }
    else if(cost_price>selling_price){
        loss=cost_price-selling_price;
        loss_percentage=(loss/cost_price)*100;
        printf("The loss percentage is %.2f%",loss_percentage);   
    }
    else{
        printf("The profit and loss is 0");
    }
    return 0;
}