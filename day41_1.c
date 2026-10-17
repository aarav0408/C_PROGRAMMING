#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int count=0;
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        count=count+1;
    }
    printf("%d",count);
    return 0;
}