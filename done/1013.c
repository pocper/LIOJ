#include <stdio.h>

long Factorial(int x)
{
    long sum = 1;
    while (x)
    {
        sum *= x;
        x--;
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);
    int way = 0;

    for (int i = 0; i < (N - 1) / 2 + 1; i++)
    {
        printf("upper=%ld\n", Factorial(i + (N - 1 - 2 * i)));
        printf("lower=%ld\n", (Factorial(i) * Factorial(N - 1 - 2 * i)));
        printf("test=%ld\n", Factorial(i + (N - 1 - 2 * i)) / (Factorial(i) * Factorial(N - 1 - 2 * i)));
        way += Factorial(i + (N - 1 - 2 * i)) / (Factorial(i) * Factorial(N - 1 - 2 * i));
    }
    printf("%d\n", way);
    return 0;
}