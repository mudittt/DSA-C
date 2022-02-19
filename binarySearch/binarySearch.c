#include <stdio.h>

int binarySearch(int mud[], int size, int el)
{
    int start, mid, end;
    start = mud[0];
    end = mud[size - 1];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mud[mid] == el)
        {
            return mid;
        }
        if (mud[mid] > el)
        {
            end = mid - 1;
        }
        if (mud[mid] < el)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[50];
    int element;
    for (int i = 0; i < 50; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n\n");
    printf("Enter the element you want the index of : ");
    scanf("%d", &element);
    printf("binarySearch is working now..\n");
    // binarySearch(arr, 50, element);
    printf("The element you entered is at the index of : %d \n", binarySearch(arr, 50, element));

    return 0;
}