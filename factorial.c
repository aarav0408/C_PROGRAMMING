//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main(){
    int number,factorial=1;
    printf("Enter the number to see its factorial: ");
    scanf("%d",&number);
    for(int i=number;i>=1;i--)
    factorial=i*factorial;
    printf("The factorial of %d is %d",number,factorial);
    return 0;
}