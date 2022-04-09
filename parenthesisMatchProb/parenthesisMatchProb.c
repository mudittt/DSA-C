#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

int parenthesisCheck(struct stack *s, char str[])
{
}

int main()
{
    char str[10];
    printf("Hi..\n");
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * (sizeof(char)));
    printf("Enter an equation (less than less characters -> ");
    scanf("%s", &str);

    int TrueOrFalse = parenthesisCheck(s, str);
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