#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main(int argc, char const *argv[])
{
    printf("hi\n");
    // Constructing the root node
    struct node *r = (struct node *)malloc(sizeof(struct node));
    r->data = 2;
    r->left = NULL;
    r->right = NULL;

    // First child of root
    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Second child of root
    struct node *p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    // Linked -> root node with p1 and p2
    r->left = NULL;
    r->right = NULL;
    return 0;
}
