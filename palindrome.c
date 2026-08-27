#include <stdio.h>

int main(){
    int reverse=0,original,digit,temp;
    printf("Enter the number to check if it is palindrome or not: ");
    scanf("%d",&original);
    temp=original;
    while(temp!=0){
        digit=temp%10;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    if(original==reverse){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}