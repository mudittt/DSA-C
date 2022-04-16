#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
    // returning the created node
}
int main()
{
    printf("hi\n");
    int str[6];
    struct node *r = createNode(6);    // root
    struct node *pl = createNode(4);   // parent left
    struct node *pll = createNode(2);  // left child of left parent
    struct node *plr = createNode(5);  // right child of left parent
    struct node *pr = createNode(8);   // parent left
    struct node *prr = createNode(10); // right child of right parent

    // root to parent
    r->left = pl;
    r->right = pr;

    // Left parent to child
    pl->left = pll;
    pl->right = plr;

    // Right parent to child
    pr->right = prr;

    return 0;
}