#include <stdio.h>
#include <string.h>

void BubbleSort(int *str[6])
{
    for (int i = 0; i < 5; i++)
    {
        if (*str[i] == *str[i + 1])
        {
            i++;
        }
        else
        {
            int temp = (*str[i + 1]);
            (*str[i + 1]) = (*str[i]);
            (*str[i]) = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    printf("\nhi.\n");
    int random[6] = {11, 4, 17, 9, 2, 7};

    BubbleSort(random);
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random[i]);
    }

    return 0;
}
