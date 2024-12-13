#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int list[3][3] = {}, n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value of List[%d][%d]:", i, j);
            scanf("%d", &list[i][j]);
        }
    }
    int max = list[0][0], min = list[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (list[i][j] > max)
                max = list[i][j];
            if (list[i][j] < min)
                min = list[i][j];
                }
    }
    printf("Max is %d\n", max);
    printf("Min is %d\n", min);
    return 0;
}