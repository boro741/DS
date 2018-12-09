#include<stdio.h>
#include<stdlib.h>

struct node 
{
    char data;
    struct node *left;
    struct node *right;
};
 
/* newNode() allocates a new node with the given data and NULL left and 
   right pointers. */
struct node* newNode(char data)
{
  // Allocate memory for new node 
  struct node* node = (struct node*)malloc(sizeof(struct node));
 
  // Assign data to this node
  node->data = data;
 
  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}
 
void preorder(struct node *t)        //address of root node is passed in t
{
    if(t!=NULL)
    {
        printf("\n%c",t->data);        //visit the root
        preorder(t->left);        //preorder traversal on left subtree
        preorder(t->right);        //preorder traversal om right subtree
    }
}
 
int main()
{
  /*create root*/
  struct node *root = newNode('A');  
  /* following is the tree after above statement 
 
        1
      /   \
     NULL  NULL  
  */
   
 
  root->left        = newNode('B');
  root->right       = newNode('C');
  /* 2 and 3 become left and right children of 1
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
  */
 
 
 // root->left->left  = newNode(4);
  /* 4 becomes left child of 2
           1
       /       \
      2          3
    /   \       /  \
   4    NULL  NULL  NULL
  /  \
NULL NULL
*/
 
preorder(root);
  return 0;
}
