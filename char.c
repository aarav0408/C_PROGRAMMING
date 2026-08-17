//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main(){
    char a;
    printf("Input a character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("The character is uppercase");
    }
    else if(a>='a'&& a<='z'){
        printf("The charcter is lowercase");
    }
    else if(a>='0' && a<='9'){
        printf("The character is digit");
    }
    else{
        printf("The character is special character");
    }
    return 0;
}