#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char data;
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

int parenthesisChecker(struct stack *top, char str[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (str[i] == '(')
        {
            top = push(top, 9);
        }
        else if (str[i] == ')')
        {
            pop(&top);
        }
    }

    linkedListTraversal(top);

    if (isEmpty(top))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *top = NULL;
    char str[10];
    printf("Enter an equation (less than less characters -> ");
    scanf("%s", &str);

    int TrueOrFalse = parenthesisCheck(top, str);
    if (TrueOrFalse == 1)
    {
        printf("\nValid parenthesis.");
    }
    else
    {
        printf("\nNot A Valid parenthesis.");
    }
    return 0;
}
