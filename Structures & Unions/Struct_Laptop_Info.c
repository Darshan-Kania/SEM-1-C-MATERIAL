#include <stdio.h>

int main()
{
    /*Darshan Kania*/
    struct Laptop_Info
    {
        char name[20], memory[20], ram[9], company[20], processor[20], rgb, gaming;
        int year, price, charger;
    };
    struct Laptop_Info l1;
    printf("Enter Company Name: ");
    gets(l1.company);
    printf("Enter year of launch: ");
    scanf("%d", &l1.year);
    printf("Name of Laptop: ");
    scanf(" %[^\n]", l1.name);
    printf("Enter Processor name: ");
    scanf(" %[^\n]", l1.processor);
    printf("Enter RAM: ");
    scanf(" %s", l1.ram);
    printf("Enter Storage: ");
    scanf(" %s", l1.memory);
    printf("RGB keyboard? Y/N: ");
    scanf(" %c", &l1.rgb);
    printf("Gaming Laptop? Y/N: ");
    scanf(" %c", &l1.gaming);
    printf("Enter Price: ");
    scanf("%d", &l1.price);
    printf("Enter Charger in Watt: ");
    scanf("%d", &l1.charger);
    printf("\n\nHere are Details\n\n");
    printf("Company: %s\nName of Laptop: %s\nProcessor : %s\nRAM: %s\nMemory: %s\nGaming: %c\n", l1.company, l1.name, l1.processor, l1.ram, l1.memory);
    printf("RGB: %c\nCharger in watt: %d\nYear of Launch: %d\nPrice: %d\n", l1.rgb, l1.charger, l1.year, l1.price);
    return 0;
}