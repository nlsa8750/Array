#include <stdio.h>

int delete(int n, int del, int arr[])
{
    for (int i = del; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return 0;
}
int main()
{
    int n = 1;
    int n2 = 0;
    int del1 = 1;
    int del2 = 0;

    printf("Enter the size of an array : ");
    n2 = scanf("\n%d", &n);
    if (n2 != 1)
    {
        while (n2 != 1)
        {
            printf("Please enter integer only !!\n");
            scanf("%*[^\n]");
            printf("\nEnter the size of an array : ");
            n2 = scanf("\n%d", &n);
        }
    }

    int arr[n];
    int i = 0;

    printf("The elements in an array are as follows : ");
    while (i < n)
    {
        arr[i] = i + 1;

        printf("\n%d", arr[i]);
        i++;
    }

    printf("\nEnter the index you want to delete : ");
    del2 = scanf("\n%d", &del1);

    if (del2 != 1)
    {
        while (del2 != 1)
        {
            printf("Please enter integer only !!\n");
            scanf("%*[^\n]");
            printf("\nEnter the index you want to delete : ");
            del2 = scanf("\n%d", &del1);
        }
    }

    delete (n, del1, arr);

    printf("\nThe new elements in an array are as follows : ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}