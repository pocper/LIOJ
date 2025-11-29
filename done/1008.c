#include <stdio.h>
#include <math.h>

int main()
{
    long M;
    scanf("%ld", &M);
    int max = 0;
    int Bucket = 0;
    while (M)
    {
        M -= pow(2, floor(log2(M)));
        Bucket++;
    }
    printf("%d\n", Bucket);

    return 0;
}