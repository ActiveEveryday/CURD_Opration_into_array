#include <stdio.h>
#include <conio.h>

void main()
{
    int user, i;
    printf("Enter the how many elements you want into the array : ");
    scanf("%d", &user);
    int max = user;
    int arr[user], pos;

    for (i = 0; i < user; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYou Enterd into array is: \n");
    for (i = 0; i < user; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter which position you want to delete ( note : position start's with 1 ): ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= user)
    {
        for (i = pos; i < user; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("\nAfter entering a new element your element of and array is : \n");
        for (i = 0; i < user - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid Position!!");
    }
    getch();
}