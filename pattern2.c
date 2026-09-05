#include <stdio.h>

int main(){
    int n,j;
    printf("Enter the number of columns you want to print for a pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}