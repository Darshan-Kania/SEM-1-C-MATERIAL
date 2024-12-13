#include <stdio.h>
#include <string.h>
int main()
{
    /*Darshan Kania*/
    char s1[100] = "Darshan Kania";
    char s2[100] = "Vijay Kania";
    char s3[100] = "Khushbu Kania";
    // 1)strcpy(&s1[4],&s2[6]);//(han Kania,Kania)=>DarsKania
    // 2)strcpy(&s1[2], s2); //(rshan Kania,Vijay Kania)=>DaVijay Kania
    // 3)strcpy(&s1[3],strcat(&s2[3],s3));//Inside Concatenation will not start for one addresss it will concate s2 s3 then use s2 with given index and puck till last
    printf("%s\n", s2);
    printf("%s", s1);
    return 0;
}