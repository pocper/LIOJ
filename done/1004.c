#include <stdio.h>
#include <string.h>

int main()
{
    int M;
    scanf("%d", &M);

    char A[513], B[513];
    int K;
    int result;
    for (int i = 0; i < M; i++)
    {
        scanf("%s %s %d", &A, &B, &K);
        if (strlen(A) != strlen(B))
            result = strlen(A) > strlen(B) ? 1 : -1;
        else
            result = strcmp(A, B);

        if (result)
        {
            // if ((result*K > 0 &&  > 0) || (result < 0 && K < 0))
            if (result * K > 0)
                printf("A\n");
            else
                printf("B\n");
        }
        else
            printf("DRAW\n");
    }

    return 0;
}