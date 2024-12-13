#include <stdio.h>
#include <string.h>
int main()
{
    /*Darshan Kania*/
    int choice = 0, n, num = 0, comp = 0;
    char task[1000][1000], checked[1000][1000];
    printf("Welcome to To-Do List\n");
    printf("Menu\n(1)Enter New Task\n(2)Delete Task\n(3)Check Task\n(4)Uncheck Task\n(5)Display Tasks\n(6)Dispaly Menu\n(7)Exit\n");
    do
    {
        printf("\nEnter 6 to Display Menu\n\n");
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("How many Task you want to enter:");
            scanf("%d", &n);
            int ini = num;
            num += n;
            for (int i = ini; i < num; i++)
            {
                printf("Task %d:", i + 1);
                scanf(" %[^\n]", task + i);
                printf("\n\n");
            }
        }
        else if (choice == 2)
        {
            for (int i = 0; i < num; i++)
                printf("Task %d: %s\n", i + 1, task + i);
            int index;
            printf("Which Task you want to delete:");
            scanf(" %d", &index);
            for (int i = index - 1; i < num; i++)
            {
                strcpy(task[i], task[i + 1]);
            }
            num--;
            printf("\n");
        }
        else if (choice == 3)
        {
            printf("Pending Task List\n");
            for (int i = 0; i < num; i++)
                printf("Task %d: %s\n", i + 1, task + i);

            int ind;
            printf("Enter which task you want to mark check\n");
            scanf(" %d", &ind);
            strcpy(checked[comp], task[ind - 1]);
            comp++;
            for (int i = ind - 1; i < num; i++)
            {
                strcpy(task[i], task[i + 1]);
            }
            num--;
            printf("\n\n");
        }
        else if (choice == 4)
        {
            printf("Completed Task List\n");
            for (int i = 0; i < comp; i++)
                printf("Task %d: %s\n", i + 1, checked[i]);
            int ind;
            printf("Enter which task you want to mark Pending\n");
            scanf("%d", &ind);
            strcpy(task[num], checked[ind - 1]);
            num++;
            for (int i = ind - 1; i < comp; i++)
                strcpy(checked[i], checked[i + 1]);
            comp--;
            printf("\n\n");
        }
        else if (choice == 5)
        {
            printf("Pending Task List\n");
            for (int i = 0; i < num; i++)
                printf("Task %d: %s\n", i + 1, task + i);
            printf("\n");
            printf("Completed Task List\n");
            for (int i = 0; i < comp; i++)
                printf("Task %d: %s\n", i + 1, checked + i);
            printf("\n\n");
        }
        else if (choice == 6)
            printf("Menu\n(1)Enter New Task\n(2)Delete Task\n(3)Check Task\n(4)Uncheck Task\n(5)Display Tasks\n(6)Dispaly Mewnu\n(7)Exit\n");
        else if (choice == 7)
            return 0;
    } while (choice <= 7 && choice > 0);
    return 0;
}