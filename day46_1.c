//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int i;
    for(i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            continue;
        }
        printf("%c",str[i]);
    }
}