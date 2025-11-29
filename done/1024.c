#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < M+1; j++)
        {
            printf("%d*%d=%d\n", i, j, i * j);
        }
    }

    return 0;
}