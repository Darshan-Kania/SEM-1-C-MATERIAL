#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i != 3)
        {

            for (int j = 0; j <= 5; j++)
            {
                printf("S\t");
            }
            printf("\n");
        }
        else{
            for (int j = 0; j<=5; j++)
            {
                if (j==2)
                {
                    printf("O\t");
                }
                else{
                    printf("S\t");
                }
                
            }
                printf("\n");
            
        }
    }

    return 0;
}