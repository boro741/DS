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

typedef struct node{
    int data;         // size of int: 4 but due to padding alignment: 8
    struct node *next; // size of pointer is 8
}NODE;

NODE *Head = NULL; // Size of pointer is 8

int main()
{
    NODE *temp = NULL, *node1 = NULL, *node2 = NULL;

node1 = (NODE *)malloc(sizeof(NODE));
 node2 = (NODE *)malloc(sizeof(NODE));
    // Head node
    Head = (NODE *)malloc(sizeof(NODE));

    Head->data = 23;

    // Pointing to next node
    Head->next = node1;

    // Wrong: temp->next = Head;
    
    // Node 1
    //node1 = (NODE *)malloc(sizeof(NODE));  Doesn't works because above I have assigned
                                        //   Head next link to node1 before node1 is created.

    node1->data = 24;
    node1->next = node2;

    // Node 2
   

    node2->data = 25;
    node2->next = NULL;

    NODE *ptr = Head;

    while(ptr->next ){
        printf("data: %d\n",ptr->data);

        ptr = ptr->next;
    }
    

    return 0;
}