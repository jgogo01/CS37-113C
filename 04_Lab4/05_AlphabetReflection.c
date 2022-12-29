#include <stdio.h>

int main()
{
    int i, j;
    char alphabet = 'a';

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            printf("-");
        }

        for (j = 0; j < i * 2 + 1; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c", alphabet + i);
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
    }

    for (i = 8; i >= 0; i--)
    {
        for (j = 0; j < 10 - i; j++)
        {
            printf("-");
        }

        for (j = 0; j < i * 2 + 1; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c", alphabet + i);
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}