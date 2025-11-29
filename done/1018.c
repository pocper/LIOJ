#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int max = 1;
    int num = 0;
    int Last_num = -1;
    int count = 1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);

        if (num == Last_num)
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            count = 1;
            Last_num = num;
        }
    }
    printf("%d\n", max);
    return 0;
}