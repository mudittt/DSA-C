#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->f == q->b)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int data)
{
}

int isFull(struct queue *q)
{
    if (q->b == (q->size - 1))
    {
        return 1;
    }
    return 0;
}

void dequeue(struct queue *q)
{
}

int main(int argc, char const *argv[])
{
    struct queue *q;
    q->size = 10;
    q->f = q->b = -1;
    q->arr = (int *)malloc((q->size) * (sizeof(int)));
    return 0;
}
