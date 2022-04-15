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

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(int argc, char const *argv[])
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

    /*

    //To check if the data is assigned properly

    printf("root %d \n", r->data);
    printf("parent left %d \n", pl->data);
    printf("left child of left parent %d \n", pll->data);
    printf("right child of left parent %d \n", plr->data);
    printf("parent left %d \n", pr->data);
    printf("right child of right parent %d \n", prr->data);

    */

    preOrder(r);

    return 0;
}
