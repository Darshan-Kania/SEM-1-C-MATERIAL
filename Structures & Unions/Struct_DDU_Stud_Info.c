#include <stdio.h>
typedef struct
{
    char name[30];
    int marks[3];
    char id[30];
    int roll_no;
    char div;
    int total;
} INFO;
int main()
{
    /*Darshan Kania*/
    INFO info[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name of Student %d: ", i + 1);
        scanf(" %[^\n]", info[i].name);
        printf("Enter Roll No of %s: ", info[i].name);
        scanf(" %d", &info[i].roll_no);
        printf("Enter id number of %s: ", info[i].name);
        scanf(" %s", info[i].id);
        printf("Enter Div in block alphabet of %s: ", info[i].name);
        scanf(" %c", &info[i].div);
        info[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject %d: ", j + 1);
            scanf(" %d", &info[i].marks[j]);
            info[i].total += info[i].marks[j];
        }
        printf("\n\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Name of Student %d is %s", i + 1, info[i].name);
        printf("\n");
        printf("Roll No of %s is %d", info[i].name, info[i].roll_no);
        printf("\n");
        printf("id number of %s is %s", info[i].name, info[i].id);
        printf("\n");
        printf("Div in block alphabet of %s is %c", info[i].name, info[i].div);
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Marks in Subject %d is %d", j + 1, info[i].marks[j]);
            printf("\n");
        }
        printf("\n");
        printf("Total Marks of All Three subject is %d", info[i].total);
        printf("\n\n");
    }
    return 0;
}