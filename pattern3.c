#include <stdio.h>

int main(){
    int n,j;
    printf("Enter the number of colums u want to print for the pattern:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}