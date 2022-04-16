#include <stdio.h>
#include <malloc.h>
//#include "C:\Users\Mudit\Desktop\MAIT COLLEGE\programming\DSA(c,c++)\search_in_BST\iterativeSearch.c";

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

struct node *search(struct node *root, int element)
{
    while (root != NULL)
    {
        if (root->data == element)
        {
            return root;
        }
        if (root->data > element)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, struct node *haha)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (haha->data > root->data)
        {
            root = root->right;
            // printf(" right%d \n", root->data);
        }
        else
        {
            root = root->left;
            // printf(" left%d \n", root->data);
        }
    }
    if (prev->data > haha->data)
    {
        prev->left = haha;
    }
    else
    {
        prev->right = haha;
    }
    // printf(" %d \n", root->data);
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

int main()
{
    printf("\nHi.");
    int num;
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

    printf("\nEnter a new number you want to Insert -> ");
    scanf("%d", &num);
    struct node *haha = createNode(num);
    struct node *check = search(r, haha->data);
    if (check != NULL)
    {
        printf("\nElement is already available in the tree. \n");
    }
    else
    {
        insert(r, haha);
        preOrder(r);
    }
    return 0;
}
