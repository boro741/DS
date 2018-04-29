#include<stdio.h>
#include<stdlib.h>

/* 
    In 64 bit - pointer size: 8 bytes
       32 bit -               4 bytes
 */

/* 
    struct node *next;

    Here,
        next is a pointer of type struct node.
 */

struct node {
    int data;         // size of int: 4 but due to padding alignment: 8
    struct node *next; // size of pointer is 8
};

struct node *Head = NULL; // Size of pointer is 8

int main()
{

    printf("%lu\n",sizeof(struct node));


    printf("int: %lu\n",sizeof(int));

    printf("struct node*: %lu\n",sizeof(struct node*));

    printf("Head: %lu\n",sizeof(Head));

    int *p;
    printf("p: %lu\n",sizeof(p));

    return 0;
}