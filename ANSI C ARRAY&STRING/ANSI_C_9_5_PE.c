#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    char str[] = "STRING";
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; str[j+1]!='\0'; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s",str);
        return 0;
    } 