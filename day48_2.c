//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    printf("ENTER A SENTENCE: ");
    fgets(str,sizeof(str),stdin);

    int len=strlen(str);
    int start=0;
    for (int i=0;i<=len;i++){
        if(str[i]==' '||str[i]=='\0'||str[i]=='\n'){
            int end=i-1;
            while(start<end){
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;

                start++;
                end--;
            }
         start=i+1;
        }
    }   
        
        printf("Reversed string: %s",str);
        return 0;
}

