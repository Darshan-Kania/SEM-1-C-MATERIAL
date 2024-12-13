/*
Rules Of The Game
    1.)There will be total 21 sticks in total
    2.)Both user can pick sticks in range of [1,4] turn by turn
    3.)whoever picks last stick wins
*/
#include <stdio.h>
int Range(int p);
int Result(int, int);
int Negative(int, int);
int main()
{
    /*Darshan Kania*/
    int n = 21, x = 0;
    char p1[20], p2[20];
    printf("Enter Player 1 Name: ");
    scanf("%s", p1);
    printf("Enter Player 2 Name: ");
    scanf("%s", p2);
    int k = 0;
    while (k != 1 || k != 2)
    {
        int choice;
        if (x % 2 == 0)
            printf("%s Turn\n", p1);
        else
            printf("%s Turn\n", p2);
        printf("Currently There are %d sticks left\n", n);
        printf("Enter Your Choice in Range of [1,4]: ");
        scanf("%d", &choice);
        if (Range(choice) == -1)
        {
            printf("!!!!Enter Valid Choice!!!!\n");
            continue;
        }
        n -= choice;
        k = Result(n, x);
        if (k == 1 || k == 2)
            break;
        if (Negative(choice, n + choice) == -1)
        {
            printf("!!!!You can't enter Choice Greater than Number of Stcicks Currently There!!!!\n");
            n += choice;
            continue;
        }
        x++;
    }
    if (k == 1)
        printf("%s Wins!!!!! Well Played %s !!!", p1, p2);
    else
    {
        printf("%s Wins!!!!! Well Played %s!!!!!", p2, p1);
    }

    return 0;
}
int Range(int p)
{
    if (p < 1 || p > 4)
        return -1;
    return 26; // No Meaning Just My Birthdate
}
int Result(int n, int x)
{
    if (n == 0)
    {
        if (x % 2 == 0)
            return 1;
        else
            return 2;
    }
    return 26;
}
int Negative(int choice, int n)
{
    if (choice > n)
        return -1;
    else
        return 26;
}