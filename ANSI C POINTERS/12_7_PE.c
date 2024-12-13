#include <stdio.h>
#include <string.h>
void Sort(char *s, int size);
int main()
{
    /*Darshan Kania*/
    char str[100][100], *s = str[0];
    int num;
    printf("How Many Names You want to Enter: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter Name %d: ", i);
        scanf(" %[^\n]", str + i);
    }
    Sort(s, num);
    for (int i = 0; i < num; i++)
        printf("%s\n", *(str + i));
    return 0;
}
void Sort(char *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (strcmp(s + 100 * j, s + 100 * (j + 1)) > 0)
            {
                char temp[100];
                strcpy(temp, s + 100 * j);
                strcpy(s + 100 * j, s + 100 * (j + 1));
                strcpy(s + 100 * (j + 1), temp);
            }
        }
    }
}