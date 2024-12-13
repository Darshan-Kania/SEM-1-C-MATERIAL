#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j =5-i*2+2; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}