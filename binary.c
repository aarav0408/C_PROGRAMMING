#include <stdio.h>

int main(){
    int binary=0,n,place=1,rem;
    printf("Enter the number for its binary representation: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        binary=binary+rem*place;
        n=n/2;
        place=place*10;
    }
    printf("%d",binary)
    return 0;
}