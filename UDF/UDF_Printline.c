#include <stdio.h>
void Printline(int n);
int main()
{
    /*Darshan Kania*/
    int row;
    printf("Enter number of rows:");
    scanf("%d", &row);
    Printline(row);
    return 0;
}
void Printline(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("=\n");
    }
}