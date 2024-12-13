#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = -1;
    }
    int n;
    printf("How many element you want to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int value;
    printf("Which Elemnt value you want to delete: ");
    scanf("%d", &value);
    printf("Do you want to delete all instances of repetion?\t Enter y for yes and n for no: ");
    char answer;
    scanf(" %c", &answer);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            int x = i;
            --n;
            for (int j = 0; j < n; j++)
            {
                if (x > j)
                    continue;
                a[j] = a[j + 1];
            }
            if (answer == 'n' || answer == 'N')
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}
