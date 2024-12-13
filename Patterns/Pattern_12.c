#include <stdio.h>

int main()
{
    char c = 'A';
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf(" %c", c++);
                
            }

            else
            {
                printf(" %d", k);
                k++;
            }
        
        }
        printf("\n");
    }

    return 0;
}