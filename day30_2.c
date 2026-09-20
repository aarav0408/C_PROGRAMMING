//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int positive=0,negative=0,zero=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive=positive+1;
        }
        else if(arr[i]<0){
            negative=negative+1;
        }
        else{
            zero=zero+1;
       }
    }
    printf("positive=%d,negative=%d,zero=%d",positive,negative,zero);
    return 0;
}