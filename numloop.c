#include <stdio.h>

int main(){
    int n;
    printf("Enter the number n to display 1 to n numbers: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
        return 0;

}