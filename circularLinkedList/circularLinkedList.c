#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

/*void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
}*/

/*void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    printf("%d ", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}*/

void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertATfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // link first and second node
    head->data = 4;
    head->next = second;

    // link second and third node
    second->data = 3;
    second->next = third;

    // link third and fourth node
    third->data = 6;
    third->next = fourth;

    // list termination
    fourth->data = 1;
    fourth->next = head;

    printf("\nOld list : ");
    linkedListTraversal(head);

    printf("\nNew list : ");
    head = insertATfirst(head, 69);
    linkedListTraversal(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}