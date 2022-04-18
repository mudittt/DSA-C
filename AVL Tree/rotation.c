// left-left insertion
/*

right rotate once
--> right rotate wrt first imbalanced node

*/

// right-right insertion
/*

left rotate once
--> left rotate wrt first imbalanced node

*/

// right-left insertion
/*

right rotate once and then left rotate once
--> right rotation wrt child of first imbalanced node
--> left rotation wrt first imbalanced node

*/

// left-right insertion
/*

left rotate once and then right rotate once
--> left rotation wrt child of first imbalanced node
--> right rotation wrt first imbalanced node

*/

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int FindHeight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

struct node *createNode(int data)
{
    printf("hi.\n");
    struct node *haha = (struct node *)malloc(sizeof(struct node));
    haha->key = data;
    haha->left = NULL;
    haha->right = NULL;
    haha->height = 1;
    return haha;
}

int balanceFactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else if (FindHeight(n->left) > FindHeight(n->right))
    {
        return FindHeight(n->left) - FindHeight(n->right);
    }
    return FindHeight(n->right) - FindHeight(n->left);
}

/*
             y         r            x
           /  \      --->         /   \
          x   T3                 T1    y
         / \          <---            / \
       T1  T2           l            T2  T3
*/

struct node *leftrotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(FindHeight(y->right), FindHeight(y->left)) + 1;
    x->height = max(FindHeight(x->right), FindHeight(x->left)) + 1;

    return x;
}

struct node *rightrotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(FindHeight(y->right), FindHeight(y->left)) + 1;
    x->height = max(FindHeight(x->right), FindHeight(x->left)) + 1;

    return y;
}

int main()
{

    return 0;
}
