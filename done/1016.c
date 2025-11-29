#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// 1016
int main()
{
    int N;
    scanf("%d", &N);
    // printf("N = %d\n", N);
    getchar(); // newline
    int *num = calloc(N, sizeof(int));
    uint8_t character;
    int sum_A = 0;
    for(int i = 0; i<N; i++)
    {
        scanf("%c\n", &character);
        num[i] = character-65; // ASCII code of upper A is 65
        sum_A += (num[i]==0);
    }
    
    if(sum_A==(N-sum_A) || sum_A==0 || (N-sum_A)==0)
        printf("PEACE\n");
    else
    {
        for(int i = 0; i<N; i++)
            if((sum_A > N-sum_A && num[i]==1) || (sum_A < N-sum_A && num[i]==0))
                printf("%d\n", i+1);
    }
    free(num);
    return 0;
}