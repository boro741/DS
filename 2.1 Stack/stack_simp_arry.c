/********Simple Stack using Array***********/
/**** Stack: Array based Implementation ****/
#include <stdio.h>
#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;


void push(int x){
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack Overflow\n");
        return;
    }
    
    A[++top] = x;
}

void pop(){
    if (top == -1) {
        printf("Error: Stack Underflow\n");
        return;
    }
    
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    printf("Stack: ");
    
    for (i = 0; i <= top; i++) {
        printf("%d",A[i]);
    }
    
    printf("\n");
}



int main(){
    
    push(2); Print();
    push(3); Print();
    push(5); Print();
    
    pop(); Print();
    
    push(12); Print();
    
    return 0;
}
