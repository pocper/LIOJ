#include <stdio.h>
#include <stdlib.h>

// ID 1006
int main()
{
    int m, n;
    scanf("%d", &n); // 2 <= n <= 30
    scanf("%d", &m); // 0 <= m <= n
    getchar(); // newline
    int *m_list = calloc(m, sizeof(int));
    for(int i = 0; i < m; i++)
        scanf("%d", &m_list[i]);
    
    int counter = 0, flag;
    for(int i = 1; i < n+1; i++)
    {
        flag = 1;
        for (int j=0; j<m; j++)
        {
            // check for i and i+1
            if (i==m_list[j] | i+1==m_list[j])
                flag = 0;
        }
        if(i%2!=1) flag = 0;
        counter += flag;

        flag = 1;
        for (int j=0; j<m; j++)
        {
            // check for i-1 and i
            if (i==m_list[j] | i-1==m_list[j])
                flag = 0;
        } 
        if(i<2 | i%2!=0) flag = 0;
        counter += flag;

        flag = 1;
        for (int j=0; j<m; j++)
        {
            // check for i-2 and i
            if (i==m_list[j] | i-2==m_list[j])
                flag = 0;
        }
        if(i<3) flag = 0;
        counter += flag;

        flag = 1;
        for (int j=0; j<m; j++)
        {
            // check for i and i+2
            if (i==m_list[j] | i+2==m_list[j])
                flag = 0;
        }
        if(i>n-2) flag = 0;
        counter += flag;
    }
    printf("%d\n", counter>>1); // permutation turn to conbination
    free(m_list);
    return 0;
}