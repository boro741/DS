#include<stdio.h>
#include<stdlib.h>

// Linked List
typedef struct node {
    int data;
    struct node *next;
}Node;

Node* createList(){
    Node *newNode = (Node *)malloc(sizeof(Node));
    return newNode;
}

void insertNode(Node **head,int data,int pos){
    int count = 0;
    Node *p,*q,*newNode;

    newNode = (Node*)malloc(sizeof(newNode));
    if(!newNode){
        printf("Memory Error");
        return;
    }

    newNode->data = data;
    p = *head;

    if(pos == 1){
        newNode->next = p;
        *head = newNode;
    } else{
        while((p != NULL) && (count < pos)){
            count++;
            q = p;
            p = p->next;
        }
        q->next = newNode;
        newNode->next = p;
    }
}

int main()
{
    Node *head1;
    insertNode(head1,1,1);

    Node *p = head1;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }

    return 0;
}