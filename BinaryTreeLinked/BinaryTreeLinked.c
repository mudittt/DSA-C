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

int main(int argc, char const *argv[])
{
    printf("hi\n");
    /*

    // Steps are repeatative here, so creating a exclusive func instead
    //  Constructing the root node
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

    */

    // Using function
    struct node *r = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    r->left = NULL;
    r->right = NULL;

    /*
                 ________
                |       |
                |   2   |
                |_______|
                /       \
     ________  /        \_________
    |       |/          |        |
    |   1   |           |   4    |
    |_______|           |________|


    */
    return 0;
}
