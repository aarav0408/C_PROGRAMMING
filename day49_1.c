// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    printf("%c.", str[0]);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            printf("%c.", str[i + 1]);
        }
    }
    return 0;
}
