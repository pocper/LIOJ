#include <stdio.h>

long Factor(int Mi)
{
    long sum = 0;
    for (int i = 1; i < Mi; i++)
    {
        if (Mi % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{

    int Mi;
    while (1)
    {
        scanf("%d", &Mi);
        if (Mi == 0)
            break;

        if (Factor(Factor(Mi)) == Mi)
            printf("%ld\n", Factor(Mi));
        else
            printf("QQ\n");
    }

    return 0;
}