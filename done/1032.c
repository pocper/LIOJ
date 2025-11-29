#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    int x1, y1, x2, y2;
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%.2f\n", hypot((y2 - y1), (x2 - x1)));
    }
    return 0;
}