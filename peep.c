#include <stdio.h>
#include <conio.h>

void main()
{
    int user, i, top = -1, index;
    printf("Enter the how many elements you want into the array : ");
    if (user > 0)
    {
        scanf("%d", &user);

        int arr[user];

        for (i = 0; i < user; i++)
        {
            printf("Enter the %d element: ", i + 1);
            scanf("%d", &arr[i]);
            top++;
        }
        printf("\nYou Enterd into array is: \n");
        for (i = user - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        printf("\n\nEnter which position you want to display ( note : It will Follow LIFO ): ");
        scanf("%d", &index);
        if (index <= user && index > 0)
        {

            printf("%d postion element is %d", index, arr[top - index + 1]);
        }
        else
        {
            printf("Invalid Position");
        }
    }
    else
    {
        printf("Enter valid number of elements!!");
    }
    getch();
}