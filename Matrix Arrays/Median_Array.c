#include<stdio.h>
int main()
{
    /*Darshan Kania*/	
    int n,arr[100];
    printf("How many elements you want to store: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    printf("%d",arr[n/2]);
    return 0;
}