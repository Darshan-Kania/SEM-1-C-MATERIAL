#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    float x[6], n = 6;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d value: ", i);
        scanf("%f", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[j] <= x[j + 1])
                continue;
            else
            {
                float t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", x[i]);
    }

    return 0;
}
