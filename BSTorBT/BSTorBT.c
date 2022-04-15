#include <stdio.h>
#include <malloc.h>

static int m = 0;
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

void inOrder(struct node *root, int str[])
{
    if (root != NULL)
    {
        inOrder(root->left, str);
        printf("%d ", root->data);
        str[m] = root->data;
        m++;
        inOrder(root->right, str);
    }
}

int checkBST(int *ptr)
{
    int count = 0;
    for (int i = 1; i < 6; i++)
    {
        if (ptr[i] > ptr[i - 1])
        {
            count++;
        }
    }
    if (count == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
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

    inOrder(r, str);
    printf("\n");
    if (checkBST(str))
    {
        printf("\nUsing 'checkBST()' - Yes, BST!\n");
    }
    else
    {
        printf("\nUsing 'checkBST()' - No, not BST!\n");
    }
    if (isBST(r))
    {
        printf("\nUsing 'isBST()' - Yes, BST!\n");
    }
    else
    {
        printf("\nUsing 'isBST()' - No, not BST!\n");
    }
    return 0;
}
