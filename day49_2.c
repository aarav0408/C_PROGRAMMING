//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    printf("Enter full name: ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]='\0';
    printf("%c.",str[0]);

    for(int i=1;str[i]!='\0';i++){
        if(str[i]==' '){
            if(strchr(str+i+1,' ')!=NULL){
                printf("%c.",str[i+1]);
            }
            else{
                printf(" %s",str+i+1);
                break;
            }
        }
    }
    return 0;
}