#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    int user;
    printf("Enter the how many element you want into the array : ");
    if (user > 0)
    {
        scanf("%d", &user);
        int arr[user];
        for (i = 0; i < user; i++)
        {
            printf("Enter %d element: ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("\nYou Enterd into array is: \n");
        for (i = 0; i < user; i++)
        {
            printf("%d ", arr[i]);
        }

        int pos, value;

        printf("\n\nEnter which Position you want insert new element : ");
        scanf("%d", &pos);
        if (pos < user && pos >= 0)
        {
            printf("Enter which new position value : ");
            scanf("%d", &value);

            for (i = user - 1; i >= pos; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos] = value;

            printf("\nAfter entering a new element your element of and array is : \n");
            for (i = 0; i < user + 1; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        else
        {
            printf("Invalid Position!!");
        }
    }
    else
    {
        printf("Enter valid number of elements!!");
    }
    getch();
}