#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct InfixToPostfix
{
    int size;
    int top;
    char *arr;
};
int main(int argc, char const *argv[])
{
    char infix[10], postfix[10];
    struct InfixToPostfix *sp;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char) * (sp->size));
    printf("\nEnter an inFix expression-> ");
    scanf("%s", &infix);

    // for (int i = 0; infix[i] != '\0'; i++)
    // {
    //     printf("\n - > %c ", infix[i]);
    // }
    // printf("length : %d\n", strlen(infix));

    return 0;
}
