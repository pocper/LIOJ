#include <stdio.h>
#include <string.h>

int main()
{
    int M;
    scanf("%d", &M);
    char name[50][20];

    char temp_name[20];
    int temp_score;
    int max_score = 0;
    int count = 0;

    for (int i = 0; i < M; i++)
    {
        scanf("%s %d", &temp_name, &temp_score);
        if (temp_score > max_score)
        {
            max_score = temp_score;
            count = 0;
            memset(name, '\0', sizeof(name));
        }

        if (temp_score == max_score)
        {
            strcpy(name[count], temp_name);
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}