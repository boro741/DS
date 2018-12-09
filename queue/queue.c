#include<stdio.h>
#include<stdlib.h>
#define Q_size 10

int Queue[Q_size];
int front = -1,
    rear = -1;

int isEmpty(){
    if(front == -1 && rear == -1)
        return 1;
    else 
       return 0;
}

void enQueue(int x){
    if(rear == Q_size - 1){
        printf("Queue is Full\n");
        return;
    } else if(isEmpty()){
        front = rear = 0;
        Queue[rear] = x;
    } else{
        rear++;
        Queue[rear] = x;
    }
}

void dQueue(){
    if(isEmpty())
        return;
    else if( front == rear)
        front = rear = -1;
    else 
        front++;
}

int main(){
    int i;
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    dQueue();
    dQueue();
    for(i=front;i<=rear;i++){
        printf("%d\n",Queue[i]);
    }
    return 0;
}