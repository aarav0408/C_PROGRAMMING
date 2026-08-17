#include <stdio.h>

int main(){
    char g;
    printf("Enter a character: ");
    scanf("%c",&g);
    if (g=='a'||g=='e'||g=='i'||g=='o'||g=='u'){
        printf("The character is vowel");
    }
    else{
        printf("The character is consonant");
    }
    return 0;
}