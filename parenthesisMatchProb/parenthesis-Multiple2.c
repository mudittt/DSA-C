#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    char data;
    struct stack *next;
};

void linkedListTraversal(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("\n%c ", ptr->data);
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

char pop(struct stack **n)
{
    if (isEmpty(*n))
    {
        printf("\nstack underflow!\n");
        return 0;
    }
    else
    {
        struct stack *p = *n;
        (*n) = (*n)->next;
        char x = p->data;
        free(*n);
        return x;
    }
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }

    return 0;
}

int parenthesisChecker(struct stack *top, char str[10])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            top = push(top, str[i]);
            printf("\n%c\n", top->data);
        }
        if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (match((top->data), str[i]))
            {
                pop(&top);
            }
        }
    }

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
    printf("Enter an equation (less than 10 characters) -> ");
    scanf("%s", &str);

    int TrueOrFalse = parenthesisChecker(top, str);
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
