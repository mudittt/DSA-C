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

int main()
{

    return 0;
}
