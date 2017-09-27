#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL; // Intially head pointing to nothing


// Returns the empty new node
struct node* create_node()
{

    
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    
    return temp;
}



void insert()
{
    struct node *new_node=create_node();
    struct node *current = head;
    int n;
    printf("enter the data\n");
    scanf("%d",&n);
    new_node->data=n;
    
    if(head==NULL) // If head pointing to nothing
    {
        head = new_node; // then head points to new node
    }
    else
    {
        // Traverse to the end of list
        while(current->next)
        {
            current = current->next;
        }
        current->next=new_node;
    }
    
}



void display()
{
    struct node *ptr = head; // Ptr is pointing to the start of list
    
    if(head==NULL)  // If head not pointing to anything
    {
        printf("list is empty\n");
    }
    else
    {
        
        while(ptr)
        {
            printf("%d->",ptr->data);
            ptr = ptr->next;
        }
    }

}

int main()
{
    int choice;
    do
    {
        printf("\nenter your choice\n");
        printf("1.insert\n2.display\n3.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                break;
            case 2:display();
                break;
            case 3:exit(0);
                break;
        }
        
    }while(choice!=3);
    return 0;
}