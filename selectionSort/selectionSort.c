#include <stdio.h>
#include <string.h>

void selectionSort(int *str)
{ // This program will swap if it founds any minimum value, which is not efficient
    printf("\nRunning Selection sort 1...\n");
    int min;
    for (int i = 0; i < 5; i++)
    {
        min = str[i];
        for (int j = i + 1; j <= 5; j++)
        {
            if (str[j] < min)
            {
                min = str[j];
                str[j] = str[i];
                str[i] = min;
            }
        }
    }
}

void selectionSort2(int *str)
{ // The maximum number of swaps here will be (n-1)
    int indexOfMin, temp;
    printf("\nRunning Selection sort 2...\n");
    for (int i = 0; i < 5; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (str[j] < str[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = str[i];
        str[i] = str[indexOfMin];
        str[indexOfMin] = temp;
    }
}

int main(int argc, char const *argv[])
{
    printf("\nhi.\n");
    int random[6] = {11, 4, 17, 9, 0, 7};

    selectionSort(random);
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random[i]);
    }

    int random2[6] = {11, 4, 17, 9, 0, 7};

    selectionSort2(random2);
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random[i]);
    }

    return 0;
}
