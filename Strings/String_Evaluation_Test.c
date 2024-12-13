#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    char answers[11];
    char response[11];
    scanf("%s",answers);
    scanf("%s",response);
    int count = 0;
    for (int i = 0; i<11; i++)
    {

        if (answers[i] != response[i])
        {
            printf("Response wrong at %d and difference is answer is %c and response is %c\n", i, answers[i], response[i]);
            count++;
        }
    }
    printf("Marks are %d out of 10", 10 - count);
    return 0;
}