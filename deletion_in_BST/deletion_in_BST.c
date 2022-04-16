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

void inOrder(struct node *root)
{
    // printf("\nhahah\n");
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void delete (struct node *root, struct node *haha)
{
    // struct node *prev = NULL;
    // prev = root;
    if (root->data == haha->data)
    {
        printf("\nYou have entered the root element to delete, please enter another element. \n");
        return;
    }

    while (root != NULL)
    {
        if ((root->left) != NULL && (root->left)->data == haha->data)
        {
            root->left = NULL;
            return;
        }
        else if ((root->right) != NULL && (root->right)->data == haha->data)
        {
            root->right = NULL;
            return;
        }
        else if (root->data < haha->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
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

    printf("\nEnter a new number you want to Delete -> ");
    scanf("%d", &num);
    struct node *haha = createNode(num);
    struct node *check = search(r, haha->data);
    if (check == NULL)
    {
        printf("\nElement is not available in the tree. \n");
    }
    else
    {
        delete (r, haha);
        inOrder(r);
    }
    return 0;
}
