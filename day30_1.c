//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
        count1=count1+1;
        }
        else{
            count2=count2+1;
        }
    }
    printf("Even=%d, ODD=%d",count1,count2);
    return 0;
}