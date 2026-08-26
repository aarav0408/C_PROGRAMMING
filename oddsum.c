#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Input te number: ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2)
    sum=sum+n;
    printf("The sum of first %d number is:%d",n,sum);
    return 0;
}