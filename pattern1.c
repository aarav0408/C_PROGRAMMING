/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include<stdio.h>
int main(){
int n;
printf("Enter the times you want to print the pattern: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("****\n");
}
}
