/* 
 * Reverse Linked List
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Pointer pointing to multiple head pointers
// Insert node at the front of the list
void push(struct node **head_ref,int new_data)
{
    // 1. Allocate the node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    
    // 2. Put the data
    new_node->data = new_data;
    
    // 3. Make the next of the node as Head
    new_node->next = (*head_ref);
    
    
    // 4. Move the head point to the new_node
    (*head_ref) = new_node;
}


// Given a prev_node , insert new node after the given prev_node
void insert_after(struct node *prev_node, int new_data)
{
    // 1. Check if the prev_node is NULL
    if (prev_node == NULL) {
        printf("The previous node cannnot be NULL");
        return;
    }
    
    // 2. Allocate new node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    
    // 3. Put in the data
    new_node->data = new_data;
    
    // 4. Make next of new_node as next of prev_node
    new_node->next = prev_node->next;
    
    // 5. Make next of prev_node as new_node
    prev_node->next = new_node;
}


// Given a reference to the head of a list append an new node at end
void append(struct node **head_ref,int new_data)
{
    // 1. Allocate the node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    
    struct node *last = *head_ref; // Used in step 5 to traverse to end
    
    // 2. Put in the data
    new_node->data = new_data;
    
    // 3. Make last node next as NULL
    new_node->next = NULL;
    
    // 4. If the linked list is empty, then make the new_node as head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    // 5. Else traverse till the end
    while (last->next != NULL) {
        last = last->next;
    }
    
    // 6. Change the next of last node
    last->next = new_node;
    return;
    
}

// Print the contents of the Linked list starting from head
void printList(struct node *head)
{
    while (head != NULL) {
        printf("%d",head->data);
        head = head->next;
    }
}


int main()
{
    // Start with empty list
    struct node *head1 = NULL;
    
    
    append(&head1, 6);
    
    push(&head1, 7);
    
    
    push(&head1, 8);
    
    append(&head1, 4);
    
    insert_after(head1->next->next, 0);
    
    printf("\n Created Linked list is: ");
    printf("Head1: \n");
    printList(head1);
   
    printf("\n");
    
    /********* REVERSE THE LINKED LIST *********/
    
    printf("Reversed Linked list is: ");
    struct node *r,*q = NULL,*p = head1;
    
    while (p) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    
    head1 = q;
    
    printList(head1);
    
    printf("\n");
    
    return 0;
}
