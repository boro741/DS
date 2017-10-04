/******* 1D - Array  Calculating location ********/

#include <stdio.h>


int matrix[4] = {1,2,3,4};

int main()
{
    int pos,loc;
    
    printf("\nEnter the index of element you want to retrieve: ");
    scanf("%d",&pos);
    
    loc = (int)&matrix[0] + (pos - 0)*sizeof(int); // can also be written as (int)&matrix
    
    // Formula: 
    // Loc(i) = L0 + (i-lb)*C ;
    
    printf("L0 is: %d",(int)&matrix[0]);
    
    printf("\nThe location of index %d with element %d is: %d\n",pos,matrix[pos],loc);
    
    return 0;
}

// Observations: 
/*
 * sizeof(matrix) gives the size of the whole matrix array 
 */
