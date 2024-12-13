#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[30];
    int year;
    float collection, rating;
} Movie;
int Compare_Struct(Movie, Movie);
int main()
{
    /*Darshan Kania*/
    Movie m[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\n\nEnter Info of Movie %d\n\n",i+1);
        printf("Enter Name of Movie: ");
        scanf("  %[^\n]", m[i].name);
        printf("Enter Year of Launch: ");
        scanf("%d", &m[i].year);
        printf("Enter Rating of Movie on IMDb: ");
        scanf("%f", &m[i].rating);
        printf("Enter Collection in Box Office in Crore: ");
        scanf("%f", &m[i].collection);
    }
    printf("\n\n%d", Compare_Struct(m[0], m[1]));
    return 0;
}
int Compare_Struct(Movie m1, Movie m2)
{
    if (strcmp(m1.name, m2.name) == 0 && m1.year == m2.year && m1.collection == m2.collection && m1.rating == m2.rating)
        return 1;
    else
        return -1;
}