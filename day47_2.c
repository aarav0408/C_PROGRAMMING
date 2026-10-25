//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int i=0,start=0;
    int len=0,max=0;
    int maxStart=0;
    while(str[i]!='\0' && str[i]!='\n'){
        if(str[i]!=' '){
            len++;
        }
        else{
            if(len>max){
                max=len;
                maxStart=start;
            }
            len=0;
            start=i+1;
        }
        i++;
    }
    if(len>max){
        max=len;
        maxStart=start;
    }
    for(int i=maxStart;i<maxStart+max;i++){
        printf("%c",str[i]);
    }
    return 0;
}