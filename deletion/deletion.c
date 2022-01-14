#include <stdio.h>

void deletion(int bhad[], int size, int in)
{
    for (int i = in; i < size - 1; i++)
    {
        bhad[i] = bhad[i + 1];
    }
    // bhad[size] = NULL;
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", bhad[i]);
    }
}
int DetectingTheIndex(int mud[], int size, int el)
{
    for (int i = 0; i < size; i++)
    {
        if (mud[i] == el)
        {
            return i;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 56, 35, 654, 68};
    int size = 5, element;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element you want to delete : ");
    scanf("%d", &element);
    printf("DetectingTheIndex is working now..\n");
    printf("Your element is at index : %d \n", DetectingTheIndex(arr, size, element));
    printf("deletion is working now..\n");
    deletion(arr, size, DetectingTheIndex(arr, size, element));
    return 0;
}
