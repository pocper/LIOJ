#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#define ASCII_LOWERCASE_Z 122
// 1034
int main()
{
    uint8_t N;
    scanf("%d", &N);
    uint8_t word[1000];
    scanf("%s", &word);
    for(int i=0;i<strlen(word);i++)
    {
        word[i] += N;
        while (word[i]>ASCII_LOWERCASE_Z)
            word[i] -= 26;
    }
    printf("%s\n", word);
    return 0;
}