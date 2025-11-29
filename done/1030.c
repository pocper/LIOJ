#include <stdio.h>

int main()
{
    char S[100];
    scanf("%s", &S);
    int len = strlen(S);
    int isTrue = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (S[i] != S[len - i - 1])
        {
            isTrue = 0;
            break;
        }
    }

    if (isTrue)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}