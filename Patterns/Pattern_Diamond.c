#include <stdio.h>

int main()
{
    int row = 5;
    for (int i = 0; i <= row; i++)
    {
        if (i == 0)
        {
            for (int l = 0; l <= row; l++)
                printf(" ");
            printf("*\n");
            continue;
        }
        for (int k = row - i; k >= 0; k--)
            printf(" ");
        printf("*");
        for (int j = 0; j < i; j++)
            printf("  ");
        printf("*\n");
    }

    for (int i = row; i >= 0; i--)
    {
        if (i == 0)
        {
            for (int l = 0; l <= row; l++)
                printf(" ");
            printf("*\n");
            continue;
        }
        for (int k = row - i; k >= 0; k--)
            printf(" ");
        printf("*");
        for (int j = 0; j < i; j++)
            printf("  ");
        printf("*\n");
    }

    return 0;
}