#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL; // head is a pointer. Size = 8 bytes

// Create Node function:
struct Node *createNode(){

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = NULL;

    return temp;
} 

struct Node *rev;

// Inserting new node:
void insertNode(int n){
    struct Node *newNode = createNode();
    struct Node *currentNode = head;

    newNode->data = n;

    if(head == NULL){
        head = newNode;
    }else{
         // Traverse to the end of list. 
         while(currentNode->next){
             currentNode = currentNode->next;
         }
         currentNode->next = newNode;
         newNode->prev = currentNode;
         newNode->next = NULL;
         rev = newNode;
    } 
}

void display(){
    struct Node *ptr = head;

    // if(head == NULL){
    //     printf("list is empty\n");
    // } else{
    //     while(ptr){
    //         printf("%d->",ptr->data);
    //         ptr = ptr->next;
    //     }
    // }

     while(rev){
            printf("%d->",rev->data);
            rev = rev->prev;
        }
}

void reverse(){
    struct Node *p = head;
    struct Node *q = NULL;
    struct Node *temp;
 
    while(p){
        temp = q;
        q = p;
        p = p->next;
        q->next = temp;
    }

    head = q;
    display();
    //printf("%d->",p->data);

}

int main()
{
   insertNode(1);
   insertNode(2);
   insertNode(3);
   insertNode(4);
   insertNode(5);
   printf("\nBefore:\n");
  // display();
   //printf("\nAfter: \n");

   reverse();

    return 0;
}