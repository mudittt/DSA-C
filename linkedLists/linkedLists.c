#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 95;
    second->next = third;

    // list termination
    third->data = 654;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}
