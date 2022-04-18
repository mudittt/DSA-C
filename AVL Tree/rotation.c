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

int main()
{

    return 0;
}
