#include <stdio.h>

long len(long num)
{
    int len = 0;
    while (num)
    {
        num /= 10;
        len++;
    }
    return len;
}

long power(long x, int n)
{
    long sum = 1;

    while (n)
    {
        sum *= x;
        n--;
    }
    return sum;
}

int Digits(long num, int offset)
{
    return (num / power(10, offset)) % 10;
}

int main()
{
    long N, M;
    scanf("%ld %ld", &N, &M);
    long temp = 0;

    for (long i = N; i < M + 1; i++)
    {
        temp = 0;
        for (long j = 0; j < len(i); j++)
        {
            temp += power(Digits(i, j), len(i));
        }

        if (temp == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}