#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            if (j < N - i)
            {
                printf(" ");
            }
            else if (j < N + i-1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}