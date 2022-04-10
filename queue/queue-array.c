#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};

void enqueue(struct queue *q, int data)
{
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
