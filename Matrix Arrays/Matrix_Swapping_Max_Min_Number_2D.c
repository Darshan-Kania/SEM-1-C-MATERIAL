#include <stdio.h>
#include <limits.h>
int main()
{
    /*Darshan Kania*/
    int arr[3][3], max = INT_MIN, min = INT_MAX, min_i, min_j, max_i, max_j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    printf("Max is %d\n", max);
    printf("Max is %d\n", min);
    int temp = arr[max_i][max_j];
    arr[max_i][max_j] = arr[min_i][min_j];
    arr[min_i][min_j] = temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}