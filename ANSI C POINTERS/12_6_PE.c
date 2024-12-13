#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    char str[7][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int day;
    printf("Which day you want to know: ");
    scanf("%d", &day);
    char *s = str[0];
    printf("%s\n", (s + (day - 1) * 20));
    printf("%s", *(str + day - 1));
    return 0;
}
