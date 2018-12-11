#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; // head is a pointer. Size = 8 bytes

// Create Node function:
struct Node *createNode(){

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = NULL;

    return temp;
} 

// Inserting new node:
void insertNode(){
    struct Node *newNode = createNode();
    struct Node *currentNode = head;
    int n;
    printf("\nEnter data: ");
    scanf("%d",&n);
    newNode->data = n;

    if(head == NULL){
        head = newNode;
    }else{
         // Traverse to the end of list. 
         while(currentNode->next){
             currentNode = currentNode->next;
         }
         currentNode->next = newNode;
    } 
}

void display(){
    struct Node *ptr = head;

    if(head == NULL){
        printf("list is empty\n");
    } else{
        while(ptr){
            printf("%d->",ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
   insertNode();
   insertNode();
   display();

   

    return 0;
}