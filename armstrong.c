#include <stdio.h>
#include<math.h>
int main(){
    int num,sum=0,original,remainder;
    printf("Enter the number to check if it is armstrong or not: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder=num%10;
        sum=sum+(remainder*remainder*remainder);
        num=num/10;
    }
    if(sum==original){
        printf("The number %d is armstrong",original);
    }
    else{
        printf("The number %d is not armstrong",original);
    }
    return 0;
}