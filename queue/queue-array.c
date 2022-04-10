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

int isFull(struct queue *q)
{
    if (q->b == (q->size - 1))
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("\nQueue is full. Wait for your turn.\n");
    }
    else
    {
        q->b++;
        q->arr[q->b] = data;
    }
}

void dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("\nQueue is already empty.\n");
    }
    else
    {
        q->f++;
    }
}

void queueTraversal(struct queue *q)
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
    printf("HI\n");
    struct queue *q;
    q->size = 10;
    q->f = q->b = -1;
    q->arr = (int *)malloc((q->size) * (sizeof(int)));

    enqueue(q, 56);
    dequeue(q);
    queueTraversal(q);

    return 0;
}
