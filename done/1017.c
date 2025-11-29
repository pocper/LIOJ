#include <stdio.h>
#include <stdlib.h>

void sort(int C, int *HighestC)
{

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < C - 1; j++)
        {
            int temp;
            if (HighestC[j + 1] > HighestC[j])
            {
                temp = HighestC[j + 1];
                HighestC[j + 1] = HighestC[j];
                HighestC[j] = temp;
            }
        }
    }
}

void Compare(int C, int *HighestC, int temp)
{
    if (temp > HighestC[C - 1])
    {
        HighestC[C - 1] = temp;
    }
}

void SumN(int C, int *HighestC)
{
    long sum = 0;
    for (int i = 0; i < C; i++)
    {
        sum += HighestC[i];
    }
    printf("%ld", sum);
}

int main()
{
    int C = 0;
    scanf("%d", &C);
    int *HighestC;
    if (C > 0)
    {
        HighestC = calloc(C, sizeof(int));
    }
    else
    {
        printf("%d\n", 0);
        return 0;
    }

    int N = 0;
    scanf("%d", &N);

    int temp = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        if (i > C - 1)
        {
            sort(C, HighestC);
            Compare(C, HighestC, temp);
            sort(C, HighestC);
        }
        else
        {
            HighestC[i] = temp;
        }
    }
    SumN(C, HighestC);
    free(HighestC);

    return 0;
}