#include<stdio.h>

int main(){

    int i = 2;

    int *p;

    p = &i;

    int *q;

    q = p;  // Since p value is address of i;
            // Therefore q points to address of i;
            // So *p, *q  both are pointing to same.
            // NOTE: 
            // *q is not a pointer to pointer. Since doesn't point to pointer. 
     /* If q = &p u think to make it pointer to pointer:
        it cannot be extended to reach what p is pointing. i.e **q cannot be used.
      */   
    printf("%d\n",*p);
    printf("%d\n",*q);
    return 0;
}