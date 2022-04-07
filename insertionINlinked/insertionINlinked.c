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

struct node *insertAtfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

struct node *insertAtindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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

    // linkedListTraversal(head);
    head = insertAtfirst(head, 9873);
    linkedListTraversal(head);
    printf("\n\n\n");
    head = insertAtindex(head, 734, 2);
    linkedListTraversal(head);
    printf("\n\n\n");
    head = insertAtEnd(head, 0);
    linkedListTraversal(head);
    printf("\n\n\n");
    head = insertAfterNode(head, third, 99);
    linkedListTraversal(head);
    
    return 0;
}
