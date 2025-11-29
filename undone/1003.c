#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#define charInLine_max 100
// ID 1003
int main()
{
    uint8_t n; // 1 <= n <= 100
    scanf("%d", &n);
    uint8_t *S = calloc(charInLine_max * n + 1, sizeof(uint8_t));
    uint8_t line[charInLine_max + 1];
    for(int i = 0; i<n; i++)
    {
        scanf("%s", &line);
        strcat(S, line);
    }
    // printf("Input = %s\n", S);
    uint8_t m; // 1 <= m <= length(S)
    scanf("%d\n", &m);
    uint8_t Am;
    uint8_t *S_new = calloc(m+1, sizeof(uint8_t));
    S_new[m]='\0';
    for(int i = 0; i<m; i++)
    {
        scanf("%s", &line);
        Am = atoi(line);
        // printf("Am = %d\n", Am);
        S_new[i] = S[Am-1];
    }
    printf("%s\n", S_new);
    free(S);
    free(S_new);
    return 0;
}