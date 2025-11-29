#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N;
    scanf("%ld", &N);
    // long ones_9 = N/11;
    // long sum = N - ones_9;
    long sum = N;
    long div_10 = 0;
    while(N)
    {
        div_10 += 1;
        sum -= N/11*div_10 + N/10;
        N /= 100;
    };
    
    printf("%ld\n", sum);
    return 0;
}