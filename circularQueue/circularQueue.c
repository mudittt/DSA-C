#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int b;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->b + 1) % (q->size) == (q->f))
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->b)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int data)
{
    if (isFull(q))
    {
        printf("\nQueue is full. Wait for your turn.\n");
    }
    else
    {
        q->b = (q->b + 1) % q->size;
        q->arr[q->b] = data;
    }
}

int main(int argc, char const *argv[])
{
    printf("\nHi.\n");
    struct circularQueue *q;
    q->size = 10;
    q->f = 0;
    q->b = 0;
    q->arr = (int *)malloc((sizeof(int)) * (q->size));
    return 0;
}
