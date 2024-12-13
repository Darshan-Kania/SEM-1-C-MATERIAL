#include <stdio.h>
// Problem Statement: Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

int main()
{
    /*Darshan Kania*/
    int arr[1000], size, arr2[3];
    printf("Enter Size of Array You Want: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d]:", i);
        scanf("%d", (arr + i));
    }
    int *p1 = arr, *p2 = arr, *p3 = arr;
    int i, j, k, flag = 0;
    for (i = 0; i < size; i++)
    {
        p1 = arr + i;
        for (j = 0; j < size; j++)
        {
            p2 = arr + j;
            for (k = 0; k < size; k++)
            {
                p3 = arr + k;
                if (i != j && i != k && j != k && (*p1 + *p2 + *p3) == 0)
                {
                    arr2[0] = i;
                    arr2[1] = j;
                    arr2[2] = k;
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("Index of Triplet\n");
        for (i = 0; i < 3; i++)
            printf("%d\t", arr2[i]);
        printf("\n");
        printf("Values of Triplet\n");
        for (i = 0; i < 3; i++)
            printf("%d\t", arr[arr2[i]]);
    }
    else
        printf("No Such Triplet Possible");
    return 0;
}