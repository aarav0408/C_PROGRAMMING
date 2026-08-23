#include <stdio.h>
#include<math.h>
int main()
{
    int a, b,ans;
    char operator;
    printf("ENTER A AND B OPERANDS: ");
    scanf("%d %d", &a, &b);
    printf("ENTER THE OPERATOR: ");
    scanf(" %c", &operator);
    if (operator == '+')
    {
        ans = a+b;
        printf("The sum is:%d", ans);
    }
    else if(operator=='-')
    {
        ans=a-b;
        printf("The difference is:%d",ans);
    }
    else if(operator=='/')
    {
        ans=a/b;
        printf("The quotient is:%d",ans);
    }
    else if(operator=='*'){
        ans=a*b;
        printf("The Answer is:%d",ans);
    }
    else if(operator=='%'){
        ans=a%b;
        printf("The answer is:%d",ans);
    }
    return 0;
}