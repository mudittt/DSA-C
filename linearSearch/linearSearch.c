#include <stdio.h>

void LinearSearch(int bhad[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (bhad[i] == n)
        {
            printf("The entered element %d is at the index of %d \n", n, i);
        }
    }
}

int main(int argc, char const *argv[])
{
    int num;
    int arr[50];
    for (int i = 1; i < 50; i++)
    {
        arr[i - 1] = i;
    }
    arr[49] = 1;

    printf("\n\n\n\n");
    for (int i = 1; i < 50 + 1; i++)
    {
        printf("%d ", arr[i - 1]);
    }
    printf("\n\n");
    printf("Enter the number you wanna search in the array : ");
    scanf("%d", &num);

    LinearSearch(arr, 50, num);

    return 0;
}
