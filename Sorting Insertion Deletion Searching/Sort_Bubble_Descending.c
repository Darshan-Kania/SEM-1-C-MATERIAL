#include <stdio.h>

int main()
{   
    /*Darshan Kania*/
    float arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value of %d number:", i);
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[j + 1])
            {

                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", arr[i]);
    }

    return 0;
}