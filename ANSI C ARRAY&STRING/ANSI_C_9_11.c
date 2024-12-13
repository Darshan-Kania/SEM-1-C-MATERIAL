#include <stdio.h>
#include<string.h>
int main()
{
    /*Darshan Kania*/
    char s1[] = "NEW DELHI";
    char s2[] = "BANGLORE";
    char s3[] = "JABALPUR";
    char s4[] = "MIRZAPUR";
    strncpy(s1, s2, 8);
    strncpy(s3, s4, 3);
    printf("%s\n", s3);
    printf("%s", s1);

    return 0;
}