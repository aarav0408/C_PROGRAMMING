#include <stdio.h>

int main(){
    int factors=0,num;
    printf("Enter the number to check its factors: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if (num%i==0){
          printf("%d ",i);
        }
    }
    return 0;
}