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

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    printf("hi\n");

    struct node *r = createNode(2);   // root
    struct node *pl = createNode(1);  // parent left
    struct node *pll = createNode(5); // left child of left parent
    struct node *plr = createNode(2); // right child of left parent
    struct node *pr = createNode(6);  // parent left
    struct node *prr = createNode(7); // right child of right parent

    // root to parent
    r->left = pl;
    r->right = pr;

    // Left parent to child
    pl->left = pll;
    pl->right = plr;

    // Right parent to child
    pr->right = prr;

    inOrder(r);
    return 0;
}
