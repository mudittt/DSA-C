#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == (-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("stack overflow.");
    }
    else
    {
        ptr->arr[ptr->top + 1] = data;
        ptr->top++;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow.");
        return -1;
    }
    else
    {
        int val = (ptr->arr[ptr->top]);
        ptr->top--;
        return val;
    }
}

int main(int argc, char const *argv[])
{
    /*   struct stack s;
     s.size = 5;
     s.top = -1;
     s.arr = (int *)malloc(s.size * (sizeof(int)));    */
    printf("Hi..\n");
    struct stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * (sizeof(int)));

    /*    printf("\npushing an element manually in the stack..\n");
    s->arr[0] = 7;
    s->top++;    */

    printf("Full -> %d\n", isFull(s));
    printf("Empty -> %d\n", isEmpty(s));

    push(s, 55);

    printf("After pushing, Full -> %d\n", isFull(s));
    printf("After pushing, Empty -> %d\n", isEmpty(s));

    pop(s);

    printf("After popping, Full -> %d\n", isFull(s));
    printf("After popping, Empty -> %d\n", isEmpty(s));

    return 0;
}
