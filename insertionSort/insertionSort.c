#include <stdio.h>
#include <string.h>

void insertionSort(int *str)
{
    int a = 1, j;
    while (a != 6)
    {

        for (j = a; j > 0; j--)
        {
            printf("j=%d and j-1=%d\n", j, j - 1);
            if (str[j] < str[j - 1])
            {
                printf("before:: str[j-1]=%d and str[j]=%d\n", str[j - 1], str[j]);
                int temp = str[j - 1];
                str[j - 1] = str[j];
                str[j] = temp;
                printf("after:: str[j-1]=%d and str[j]=%d\n", str[j - 1], str[j]);
            }
            else
            {
                break;
            }
        }
        a++;
        printf("a=%d\n", a);
    }
}

int main(int argc, char const *argv[])
{
    printf("\nhi.\n");
    int random[6] = {11, 4, 17, 9, 0, 7};

    insertionSort(random);
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random[i]);
    }

    return 0;
}
