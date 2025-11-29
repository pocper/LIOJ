#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int d;
    int temp1, temp2;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp2);

        if (i == 1)
        {
            d = temp2 / temp1;
        }
        else if (i > 1)
        {
            if (d != temp2 / temp1)
            {
                printf("No\n");
                break;
            }
        }
        temp1 = temp2;
    }

    if (temp1 == temp2)
        printf("Yes\n");
    return 0;
}