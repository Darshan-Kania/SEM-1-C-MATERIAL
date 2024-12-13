#include <stdio.h>
void *max(int *a, int n, int *answer);
int main()
{
    /*Darshan Kania*/
    int a[5] = {2, 34, 325, 2435, 1};
    int *answer = a;
    answer = max(a, 5, answer);
    printf("%d", *answer);
    return 0;
}
void *max(int *a, int n, int *answer)
{
    answer = a;
    for (int i = 0; i < n; i++)
    {
        if (*answer < *(a + i))
            answer = a + i;
    }
    return answer;
}