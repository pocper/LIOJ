#include <stdio.h>
#include <string.h>

int main()
{
    int Length = 0;
    char L[100];
    char new[100];
    scanf("%s", &L);
    Length = strlen(L);
    for (int i = 0; i < Length; i++)
    {
        new[i] = L[Length - i - 1];
    }
    new[Length] = '\0';
    printf("%s\n", new);
    return 0;
}