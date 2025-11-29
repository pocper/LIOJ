#include <stdio.h>

int main()
{
    long N;
    scanf("%ld", &N);
    long n = 0;
    for (long i = 1; i < N; i++)
    {
        if (i * i < N)
        {
            n = i;
        }
    }

    printf("%ld\n", n * (n + 1) * (2 * n + 1) / 6);
    return 0;
}