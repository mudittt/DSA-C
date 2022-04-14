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
    if (((q->b + 1) % (q->size)) == (q->f))
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if ((q->f) == (q->b))
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
        q->b = ((q->b + 1) % (q->size));
        q->arr[q->b] = data;
        // printf("\nSuccessful enqueue\n");
    }
}

void dequeue(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("\nQueue is already empty.\n");
    }
    else
    {
        q->f = ((q->f + 1) % (q->size));
    }
}

void queueTraversal(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        for (int i = ((q->f) + 1); i <= (q->b); i++)
        {
            printf("-> %d\n", q->arr[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    printf("\nHi.\n");
    struct circularQueue *q = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->size = 10;
    q->f = 0;
    q->b = 0;
    q->arr = (int *)malloc((sizeof(int)) * (q->size));

    printf("\nhehe\n");
    enqueue(q, 55);
    enqueue(q, 34);
    dequeue(q);
    queueTraversal(q);
    return 0;
}
// print nhi horahi