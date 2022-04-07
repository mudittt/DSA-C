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

struct node *deleteATfirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    return head;
    free(ptr);
}

struct node *deleteATend(struct node *head)
{
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr1 = head;
    ptr2 = head;
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    while (ptr1->next != ptr2)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = NULL;
    free(ptr2);
    return head;
}

struct node *deleteATindex(struct node *head, int index)
{
    struct node *p1 = head;
    struct node *p2 = head;
    int i = 0;
    while (i != index - 1)
    {
        p1 = p1->next;
        i++;
    }
    int j = 0;
    while (j != index)
    {
        p2 = p2->next;
        j++;
    }
    p1->next = p2->next;
    free(p2);

    return head;
}

struct node *delete_Given_Value(struct node *head, int value)
{
    struct node *p1 = head;
    struct node *p2 = head->next;

    while (p2->data != value && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }

    if (p2->data == value)
    {
        p1->next = p2->next;
        free(p2);
    }

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
    third->data = 8;
    third->next = fourth;

    // list termination
    fourth->data = 1;
    fourth->next = NULL;

    printf("\nList before deletion : \n");
    linkedListTraversal(head);

    /*head = deleteATfirst(head);
    printf("\nList after deletion : \n");
    linkedListTraversal(head);*/

    /*printf("\nList after deletion : \n");
    head = deleteATend(head);
    linkedListTraversal(head);*/

    /*printf("\nList after deletion at index: %d \n", 2);
    head = deleteATindex(head, 2);
    linkedListTraversal(head);*/

    printf("\nList after deletion at value: %d \n", 1);
    head = delete_Given_Value(head, 1);
    linkedListTraversal(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
