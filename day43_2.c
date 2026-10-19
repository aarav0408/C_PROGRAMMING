//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
    char str[1000],reverse;
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0' && str[i]!='\n'){
        i++;
    }
    int j=i-1;
    int palindrome=1;
    for(i=0;i<j;i++,j--){
        if(str[i]!=str[j]){
            palindrome=0;
        }
    }
    if(palindrome==1){
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
}