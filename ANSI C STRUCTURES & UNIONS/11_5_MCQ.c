#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    union U
    {
        int i;
        int j;
        // union U2
        // {
        //     int f;
        // }; Union can be nested in union
    }; // Correct: test={5};  //Invalid test=5;
    // union U test=5;   //Wrong
    union U test = {5};
    printf("%d\t%d", test.i, test.j);
    return 0;
}