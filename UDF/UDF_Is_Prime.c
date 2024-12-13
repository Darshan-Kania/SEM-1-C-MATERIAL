#include <stdio.h>
int Is_Prime(int n);
int main()
{
    /*Darshan Kania*/
    int num;
    printf("Enter number you want to check:");
    scanf("%d", &num);
    Is_Prime(num);
    return 0;
}
int Is_Prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count != 0)
        printf("\nNumber is not Prime\n");
    else
        printf("\nNumber is Prime\n");
}