#include <stdio.h>

void display(int mud[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", mud[i]);
    }
    printf("\n");
}

int insert(int bhad[], int capacity, int element, int index, int size)
{
    if (size >= capacity)
    {

        return -1;
    }
    else
    {
        for (int i = size; i >= index; i--)
        {

            bhad[i + 1] = bhad[i];
        }
        bhad[index] = element;
    }
}

int main()
{
    int arr[100] = {1, 6, 46, 78, 93};
    int size = 5, element, index;

    printf("Enter the element you want to insert : ");
    scanf("%d", &element);
    printf("Enter the number of index you want the above number to be inserted : ");
    scanf("%d", &index);
    display(arr, size);
    insert(arr, 100, element, index, size);
    size = size + 1;
    display(arr, size);

    return 0;
}
