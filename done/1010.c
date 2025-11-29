#include <stdio.h>

int main()
{
    long A = 0, B = 0;
    scanf("%ld %ld", &A, &B);
    if (A == B)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}