//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(str[i]>='a' && str[i]<='z'){
            for(int j=0;j<i;j++){
                if(str[i]==str[j]){
                    printf("%c",str[i]);
                    return 0;
                }
            }
        }
    }
}