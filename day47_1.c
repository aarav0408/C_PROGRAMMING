//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        for(int j=0;str2[j]!='\0' && str2[j]!='\n';j++){
            if(str1[i]==str2[j]){
                printf("Anagrams");
            }
        }
    }
}