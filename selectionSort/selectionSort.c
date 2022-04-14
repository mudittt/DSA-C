#include <stdio.h>
#include <string.h>

void selectionSort(int *str)
{
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

int main(int argc, char const *argv[])
{
    printf("\nhi.\n");
    int random[6] = {11, 4, 17, 9, 0, 7};

    selectionSort(random);
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random[i]);
    }

    return 0;
}
