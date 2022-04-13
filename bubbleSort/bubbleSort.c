#include <stdio.h>
#include <string.h>

void BubbleSort(int *str)
{
    int i, j;
    j = 0;
    while (j != 5)
    {
        i = 0;
        while (i < (5 - j))
        {
            if (str[i] > str[i + 1])
            {
                int temp = str[i + 1];
                str[i + 1] = str[i];
                str[i] = temp;
            }
            i++;
        }
        j++;
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
