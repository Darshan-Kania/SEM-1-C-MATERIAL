#include <stdio.h>
int Occurence(char *s, char c, int *a, int *size);
int main()
{
    /*Darshan Kania*/
    int arr[100], *a = arr, size = 0;
    char str[1000], *s = str, c;
    printf("Enter String: ");
    scanf("%s", str);
    printf("Enter character you want to search: ");
    scanf(" %c", &c);
    if (Occurence(s, c, a, &size) == 1)
    {
        printf("Character Found!!!\n\n");
        printf("Index where character found\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
int Occurence(char *s, char c, int *a, int *size)
{
    int j = 0, flag = 0;
    for (int i = 0; *s != '\0'; i++)
    {
        if (*s == c)
        {
            *(a + j) = i;
            j++;
            flag = 1;
        }
        s++;
    }
    *size = j;
    if (flag == 1)
        return 1;
    else
        return -1;
}