#include <stdio.h>

void main()
{
    char *city[3] = {"Baroda", "Ahmedabad", "Surat"};

    printf("%u\n", city[0]);
    printf("%u\n", city[1]);
    printf("%u\n", city[2]);

    printf("hello\n");
    printf("%u\n", city);
    printf("%u\n", city + 1);
    printf("%u\n", city + 2);

    printf("hello\n");
    printf("%u\n", *city);
    printf("%u\n", *(city + 1));
    printf("%u\n", *(city + 2));

    printf("hello\n");
    printf("%c\n", **city);
    printf("%c\n", **(city + 1));
    printf("%c\n", **(city + 2));

    printf("hello\n");
    printf("%c\n", *city[0]);
    printf("%s\n", city[1] + 2);
    printf("%c\n", *city[2]);
    printf("%c\n", *(*(city + 1) + 3));
    // other possible *(city+1)+3
    //  *(*(city+1)+3)
}
