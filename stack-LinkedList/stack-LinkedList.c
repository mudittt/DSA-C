#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

void linkedListTraversal(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("\n%d ", ptr->data);
        ptr = ptr->next;
    }
}

int isFull(struct stack *top)
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct stack *push(struct stack *top, int x)
{
    if (isFull(top))
    {
        printf("\nstack overflow!\n");
    }
    else
    {
        struct stack *p = (struct stack *)malloc(sizeof(struct stack));
        p->data = x;
        p->next = top;
        top = p;
        return top;
    }
}

int pop(struct stack **n)
{
    if (isEmpty(*n))
    {
        printf("\nstack underflow!\n");
        return 1111111;
    }
    else
    {
        struct stack *p = *n;
        (*n) = (*n)->next;
        int x = p->data;
        free(*n);
        return x;
    }
}

int peek(struct stack *top, int x)
{
    struct stack *ptr = top;
    for (int i = 0; (i < x - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return 69696;
    }
}

int stackTop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        return 696969;
    }
    else
    {
        return sp->data;
    }
}

int stackBottom(struct stack *sp)
{
    struct stack *temp = sp;
    if (isEmpty(temp))
    {
        return 696969;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        return temp->data;
    }
}

int main()
{
    struct stack *top = NULL;
    top = push(top, 325);
    linkedListTraversal(top);
    printf("\nremoved the element : %d", pop(&top));

    linkedListTraversal(top);

    printf("\nempty -> %d", isEmpty(top));
    printf("\nfull -> %d", isFull(top));

    top = push(top, 34);
    // linkedListTraversal(top);
    printf("\nElement @ position 1 is -> %d \n", peek(top, 1));
    top = push(top, 364);
    printf("\nTopMost element of stack is -> %d \n", stackTop(top));
    linkedListTraversal(top);
    printf("\nBottomMost element of stack is -> %d \n", stackBottom(top));

    free(top);
    return 0;
}
