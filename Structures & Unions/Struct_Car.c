#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    typedef struct
    {
        char company[20], name[20], owner[30], engine[15], gear_type[15];
        int no_airbags, seater, year, cc;
        float avg, price;
    } car_info;
    car_info c1;
    printf("Enter name of company: ");
    scanf("%[^\n]", c1.company);
    printf("Enter Name of Car: ");
    scanf(" %[^\n]", c1.name);
    printf("Enter year of manufacturing: ");
    scanf("%d", &c1.year);
    printf("Enter Name of Owner: ");
    scanf(" %[^\n]", c1.owner);
    printf("Enter Engine type: ");
    scanf(" %s", c1.engine);
    printf("Enter Gear type: ");
    scanf(" %s", c1.gear_type);
    printf("No of airbags: ");
    scanf("%d", &c1.no_airbags);
    printf("Enter no of seats: ");
    scanf("%d", &c1.seater);
    printf("Enter CC: ");
    scanf("%d", &c1.cc);
    printf("Enter Avg: ");
    scanf("%f", &c1.avg);
    printf("Price of Car in Lakhs: ");
    scanf("%f", &c1.price);
    printf("\n\nDetail of car are\n\nCompany Name:%s\nName of Car:%s\nYera of Manufacturing:%d\nName of Owner:%s\nEngine Type:%s\nGear Type:%s\n", c1.company, c1.name, c1.year, c1.owner, c1.engine, c1.gear_type);
    printf("No of Airbags:%d\nNo of Seats:%d\nEngine Volume:%d cc\nAvegrage:%f(km/l)\nPrice of car:%f Lakhs", c1.no_airbags, c1.seater, c1.cc, c1.avg, c1.price);
    return 0;
}