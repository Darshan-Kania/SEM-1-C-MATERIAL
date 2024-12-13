#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    // Sir Acc to you pointer is always double the size of its data type but here it is not applicable I am using latest version of vscode and gcc compiler
    int *a, b, c;
    printf("Size of normal Interger %d\n", sizeof(int));
    printf("Size of a %d\nSize of b %d\nSize of c %d\n", sizeof(a), sizeof(b), sizeof(c));
    if (sizeof(a) + sizeof(b) + sizeof(c) == 2 * 3 * sizeof(int))
        printf("All three are pointers\n");

    else if (sizeof(a) == 2 * sizeof(int))
        printf("Only 1st Variable is pointer\n");

    // Output
    /*
    Size of normal Interger 4
    Size of a 4
    Size of b 4
    Size of c 4
    */

    return 0;
}