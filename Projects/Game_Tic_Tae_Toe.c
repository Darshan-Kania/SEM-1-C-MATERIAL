#include <stdio.h>
int Check(char arr[3][3]);
int Overwrite(int, int, char arr[3][3]);
void Print(char arr[3][3]);
int Limit(int, int);
int Prim_Diagonal(char arr[3][3]);
int Sec_Diagonal(char arr[3][3]);
int Row_Check(char arr[3][3]);
int Colum_Check(char arr[3][3]);
int main()
{
    /*Darshan Kania*/
    char p1[30], p2[30], board[3][3] = {'\0'};
    int k = Check(board), x = 0;
    printf("Enter Player 1 Name: ");
    scanf("%[^\n]", p1);
    printf("Enter Player 2 Name: ");
    scanf(" %[^\n]", p2);
    while (k != 1 && k != 2)
    {
        int p, q;
        if (x % 2 == 0)
            printf("%s Turn\n", p1);
        else
            printf("%s Turn\n", p2);
        printf("Enter Row Number:");
        scanf("%d", &p);
        printf("Enter Colum Number:");
        scanf("%d", &q);
        if (Overwrite(p, q, board))
        {
            continue;
        }
        if (Limit(p, q))
        {
            continue;
        }
        if (x % 2 == 0)
            board[p - 1][q - 1] = 'X';
        else if (x % 2 != 0)
            board[p - 1][q - 1] = 'O';
        x++;
        Print(board);
        if (x > 4)
            k = Check(board);
        if (x >= 9)
            break;
    }
    if (k == 1)
        printf("%s Wins!!!!,Well Played %s", p1, p2);
    else if (k == 2)
        printf("%s Wins!!!!,Well Played %s", p2, p1);
    else
        printf("!!!!Tie!!!! Well Played Both Of You!!!!");
}
int Check(char arr[3][3])
{

    if (Prim_Diagonal(arr) != 26)
        return Prim_Diagonal(arr);
    if (Sec_Diagonal(arr) != 26)
        return Sec_Diagonal(arr);
    if (Row_Check(arr) != 26)
        return Row_Check(arr);
    if (Colum_Check(arr) != 26)
        return Colum_Check(arr);
    else
        return 26; // No Meaning Just My Birthdate
}
int Overwrite(int p, int q, char arr[3][3])
{
    if (arr[p - 1][q - 1] == 'X' || arr[p - 1][q - 1] == 'O')
    {
        printf("!!!!!!!You Cant Overwrite!!!!!!\n\n");
        return 1;
    }
    return 0;
}
int Limit(int p, int q)
{
    if (p > 3 || q > 3 || p < 1 || q < 1)
    {
        printf("!!!!!Row and Colum should be between 1 & 3!!!!!\n\n");
        return 1;
    }
    return 0;
}
void Print(char arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}
int Prim_Diagonal(char arr[3][3])
{
    if (arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0] && arr[0][0] == arr[1][1] && arr[1][1] != '\0' && arr[2][2] != '\0' && arr[0][0] != '\0')
    {
        if (arr[1][1] == 'X')
            return 1;
        else if (arr[1][1] == 'O')
            return 2;
    }
    else
        return 26;
}
int Sec_Diagonal(char arr[3][3])
{
    if (arr[0][2] == arr[2][0] && arr[2][0] == arr[0][2] && arr[0][2] == arr[1][1] && arr[1][1] != '\0' && arr[2][0] != '\0' && arr[0][2] != '\0')
    {
        if (arr[1][1] == 'X')
            return 1;
        else if (arr[1][1] == 'O')
            return 2;
    }
    else
        return 26;
}
int Row_Check(char arr[3][3])
{
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2] && arr[i][j + 2] == arr[i][j] && arr[i][j] != '\0' && arr[i][j + 1] != '\0' && arr[i][j + 2] != '\0')
        {
            if (arr[i][j] == 'X')
                return 1;
            else if (arr[i][j] == 'O')
                return 2;
        }
    }
    return 26;
}
int Colum_Check(char arr[3][3])
{
    int i = 0;
    for (int j = 0; j < 3; j++)
    {
        if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 2][j] && arr[i + 2][j] == arr[i][j] && arr[i][j] != '\0' && arr[i + 1][j] != '\0' && arr[i + 2][j] != '\0')
        {
            if (arr[i][j] == 'X')
                return 1;
            else if (arr[i][j] == 'O')
                return 2;
        }
    }
    return 26;
}