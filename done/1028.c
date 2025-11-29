#include <stdio.h>

int power(int x, int n)
{
    int sum = 1;
    while (n)
    {
        sum *= x;
        n--;
    }
    return sum;
}

int AddDigits(int num, int digits)
{
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        sum += (num / power(10, i)) % 10;
    }
    return sum;
}

int len(int num)
{
    int count = 0;
    while (num)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int Year, Month, Day;
    scanf("%d %d %d", &Year, &Month, &Day);
    int addition = Year + Month + Day;
    while (len(addition) != 1)
    {
        addition = AddDigits(addition, len(addition));
    }
    printf("%d\n", addition);
    return 0;
}