    //Q85: Reverse a string.

    /*
    Sample Test Cases:
    Input 1:
    abcd
    Output 1:
    dcba

    */
    #include<stdio.h>
    int main(){
        char str[100];
        fgets(str,sizeof(str),stdin);
        char reverse;
        int i=0;
        while(str[i]!='\0' && str[i]!='\n'){
            i++;
        }
        for(i=i-1;i>=0;i--){
            printf("%c",str[i]);
        }
        return 0;
    }