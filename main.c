#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// 1035
int main()
{
    uint32_t N;
    scanf("%d", &N);
    uint8_t *arr_num = calloc(N, sizeof(uint8_t));
    for (int i=0;i<N;i++)
        scanf("%d", &arr_num[i]);
    
    uint8_t smallest_num, smallest_num_last = 0;
    for (uint32_t i=0;i<N;i++)
    {
        smallest_num = 100;
        for (uint32_t j=0;j<N;j++)
        {
            if(arr_num[i]<smallest_num && smallest_num_last!=smallest_num)
            {
                smallest_num = arr_num[i];
                printf("%d\n", smallest_num);
            }
        }
        smallest_num_last = smallest_num;
    }
    return 0;
}