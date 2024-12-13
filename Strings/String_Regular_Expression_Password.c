#include <stdio.h>
#include <windows.h>

int main()
{
    /*Darshan Kania*/
    printf("Condition for Entering Password:\n1)Min One Upper case and one lower case letter should be there\n2)min one numeric digit should be there\n3)one special charcter should be there\n4)White space not allowed\n");
    char c[20];
    printf("Enter Password: ");
    scanf("%[a-zA-Z0-9@#$]", c);
    printf("Your entered password is %s", c);
    return 0;
}
