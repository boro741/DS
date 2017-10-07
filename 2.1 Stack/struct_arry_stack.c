/**** Stack: Array -Instance based Implementation ****/
#include <stdio.h>
#include <stdlib.h>

// Structure to represent Stack
struct Stack {
    int top;
    unsigned capcity;
    int *array;
};

// Create a stack of given capacity. Initialize size of stack as 0
struct Stack *createStack(unsigned capacity){
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    
    stack->capcity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capcity * sizeof(int)); // Create an array of size capacity * size of int
    
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack *stack){
    return stack->top == stack->capcity-1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack *stack){
    return stack->top == -1;
}

// Add an item to Stack. Increment top
void push(struct Stack* stack,int item){
    if (isFull(stack)) {
        printf("Error: Stack is Full\n");
        return 0;
    }
    
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}


// Remove an item from stack. Decrement top
int pop(struct Stack* stack){
    if (isEmpty(stack)) {
        printf("Error: Stack is Empty\n");
        return 0;
    }
    
    return stack->array[stack->top--];
}

int main(){
    
    struct Stack *stack1 = createStack(10);
    
    push(stack1, 1);
    push(stack1, 2);
    push(stack1, 3);
    
    printf("%d popped from stack\n", pop(stack1));
    
    return 0;
}
