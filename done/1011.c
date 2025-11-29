#include <stdio.h>

int main()
{
    int M;
    scanf("%d", &M);
    int temp = 0;
    int sum = 0;

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    if ((double)sum / M >= 183)
    {
        printf("real\n");
    }
    else
    {
        printf("fake\n");
    }

    return 0;
}