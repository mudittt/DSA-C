#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int b;
    int *arr;
};

int main(int argc, char const *argv[])
{
    printf("\nHi.\n");
    struct circularQueue *q;
    q->size = 10;
    q->f = -1;
    q->b = -1;
    q->arr = (int *)malloc((sizeof(int)) * (q->size));
    return 0;
}
