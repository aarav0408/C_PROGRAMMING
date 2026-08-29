#include <stdio.h>

int main(){
    int hcf,num1,num2;
    printf("Enter two numbers to find its hcf: ");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    printf("The hcf of %d and %d is:%d ",num1,num2,hcf);
    return 0;
}