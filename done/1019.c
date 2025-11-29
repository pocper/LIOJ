#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// 1019
int main()
{
    uint8_t str_W[3], str_H[3];
    uint8_t W, H;
    scanf("%s %s", &str_W, &str_H);
    W = atoi(str_W);
    H = atoi(str_H);
    printf("W = %d, H = %d\n",W, H);
    uint8_t *line = calloc(W, sizeof(uint8_t));
    uint16_t step = 0;
    for(int i=0;i<H;i++)
    {
        scanf("%s", line);
        for (int j=0; j<W;j++)
        {
            if(line[j]=='.')
                step +=1;
        }
        printf("line = %s\n", line);
    }
    printf("%d\n", step-1);
    free(line);
    return 0;
}