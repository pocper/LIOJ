#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    scanf("%d", &N);
    long temp = 0;
    int isPrime = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%ld", &temp);
        if (temp == 1)
        {
            isPrime = 0;
        }
        else if (temp == 2)
        {
            isPrime = 1;
        }

        for (long j = 2; j < temp; j++)
        {
            if (temp % j == 0)
            {
                isPrime = 0;
                break;
            }
            else
            {
                isPrime = 1;
            }
        }

        if (isPrime)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Composite\n");
        }
    }
    return 0;
}