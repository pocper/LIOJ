#include <stdio.h>

int main()
{
    char card[20];
    scanf("%s", &card);

    int sum = 0;
    int count = 0;
    for (int i = 0; i < 18; i++)
    {
        if (i != 0 && (i + 1) % 5 == 0)
            continue;

        count++;
        sum += (1 + count % 2) * (card[i] - '0');

        if (count % 2 == 1 && 2 * (card[i] - '0') > 9)
            sum -= 9;
    }
    if ((card[18] - '0') == (10 - sum % 10))
    {
        if ((card[0] - '0') == 5)
        {
            printf("MASTER_CARD");
        }
        else if ((card[0] - '0') == 4)
        {
            printf("VISA");
        }
    }
    else
    {
        printf("INVALID");
    }

    return 0;
}