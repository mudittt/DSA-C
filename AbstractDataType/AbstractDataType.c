#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size; /*memory to be reserved*/
    int used_size;  /*memory to be used*/
    int *ptr;       /* points the first element */
};

void createArray(struct myArray *a, int tsize, int usize)
{
    /* Here we created the memory for total number of students using malloc  */
    // a->total_size = tsize;
    // a->used_size = usize;
    // a->ptr = (int *)malloc(tsize * sizeof(int));

    (*a).total_size = tsize;                       /* we set the value of total size as tsize. */
    (*a).used_size = usize;                        /* we set the value of used size as usize. */
    (*a).ptr = (int *)malloc(tsize * sizeof(int)); /* Here we allocated the pointer the memory requireed to contain TOTAL number of elements */
};

void setValue(struct myArray *a)
{
    /* Here we set the value of current number of students using for-loop */
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("Enter the marks of student %d : ", i);
        scanf("%d", &(a->ptr)[i]);
    }
};

void showValue(struct myArray *a)
{
    /* Here we showed the value of current number of students using for-loop */
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("The marks of student %d is : %d \n", i, (a->ptr)[i]);
    }
    free(a->ptr);
    free(a);
};

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);

    printf("We are running 'setValue' function now\n");
    setValue(&marks);
    printf("We are running 'showValue' function now\n");
    showValue(&marks);
}
