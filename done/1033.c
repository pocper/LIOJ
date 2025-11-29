#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// 1033
int main()
{
    uint8_t data_num;
    scanf("%d", &data_num);
    
    int8_t *data_pt = calloc(data_num*2, sizeof(int8_t));
    uint8_t data_pt_min[2];
    for(int i=0;i<data_num;i++)
        scanf("%d %d", &data_pt[2*i],&data_pt[2*i+1]);
    
    int distance, distance_min = 200;
    for(int i=0;i<data_num;i++)
    {
        for(int j=0;j<data_num;j++)
        {
            if (i==j) continue;
            distance = abs(data_pt[2*i]-data_pt[2*j]) + abs(data_pt[2*i+1]-data_pt[2*j+1]);
            if(distance<distance_min)
            {
                distance_min = distance;
                data_pt_min[0] = 2*i;
                data_pt_min[1] = 2*j;
            }
        }
    }

    int idx_1 = 0, idx_2 = 1;
    if((data_pt[data_pt_min[0]]>data_pt[data_pt_min[1]]) ||
        (data_pt[data_pt_min[0]]==data_pt[data_pt_min[1]] &&
        data_pt[data_pt_min[0]+1]>data_pt[data_pt_min[1]+1]))
    {
        idx_1 = 1;
        idx_2 = 0;
    }

    printf("%d %d\n", data_pt[data_pt_min[idx_1]], data_pt[data_pt_min[idx_1]+1]);
    printf("%d %d\n", data_pt[data_pt_min[idx_2]], data_pt[data_pt_min[idx_2]+1]);
    return 0;
}