#include <stdio.h>
#include <string.h>

void MergeSort(int *str, int *str2, int *str3)
{
}

int main(int argc, char const *argv[])
{
    printf("\nhi.\n");
    int random1[6] = {2, 4, 6, 8, 10, 12};
    int random2[8] = {1, 2, 5, 7, 9, 11, 13, 15};
    int sorted[14];

    printf("\nBefore merging first array ->\n");
    for (int i = 0; i < 6; i++)
    {
        printf("-> %d ", random1[i]);
    }
    printf("\nBefore merging second array ->\n");
    for (int i = 0; i < 8; i++)
    {
        printf("-> %d ", random2[i]);
    }

    // MergeSort(random1, random2, sorted);
    // printf("\nAfter merging ->\n");
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("-> %d ", random3[i]);
    // }
    return 0;
}