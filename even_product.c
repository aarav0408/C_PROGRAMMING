#include <stdio.h>

int main(){
    int n,product=1;
    printf("Enter the numbers n whose multiplication you want: ");
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2){
        printf("%d\n",i);
        product=product*i;
    }
    printf("product=%d",product);
    return 0;
}