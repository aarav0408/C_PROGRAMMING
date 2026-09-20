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