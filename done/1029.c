#include <stdio.h>

int main()
{
    int A, B;
    char op;
    scanf("%d %c %d", &A, &op, &B);
    switch (op)
    {
    case '+':
        printf("%d\n", A + B);
        break;
    case '-':
        printf("%d\n", A - B);
        break;
    case '*':
        printf("%d\n", A * B);
        break;
    case '/':
        printf("%d\n", A / B);
        break;
    }
    return 0;
}