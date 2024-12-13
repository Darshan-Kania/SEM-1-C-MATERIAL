#include <stdio.h>
struct Bit_Field_1
{
    unsigned x : 3;
    unsigned y : 28;
    unsigned p : 2;
} b1;
struct Bit_Field_2
{
    unsigned x : 30;
    unsigned y : 20;
    unsigned p : 13;
} b2;
struct Bit_Field_3
{
    unsigned x : 30; // 1 box of 4 bytes 2 bit remaining
    unsigned y : 20; // 1 box of 4 bytes 12 bit remaining
    unsigned p : 12; // will go in last 12 bit
} b3;
struct Bit_Field_4
{
    unsigned x : 31;
    unsigned y : 2;
    unsigned p : 30;
    unsigned q : 3;
    unsigned e : 29;
} b4;
int main()
{
    /*Darshan Kania*/
    printf("%d\n", sizeof(b1)); 
    printf("%d\n", sizeof(b2));
    printf("%d\n", sizeof(b3));
    printf("%d\n", sizeof(b4));
    return 0;
}