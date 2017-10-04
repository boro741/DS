/******* 2D - Array  Calculating location ********/
/******* CMO *****************/
#include <stdio.h>


/*
 Matrix:
 1,2,3
 4,5,6
 7,8,9
 */

// CMO storing
int matrix[3][3] = {1,4,7,
                    2,5,8,
                    3,6,9};


/* Matrix:
 *  00 01 02   |
 *  10 11 12   |
 *  20 21 22   V
 */





int main()
{
    int i,j,loc;
    
    printf("\nEnter the index(i,j) of element you want to retrieve: ");
    scanf("%d %d",&i,&j);
    
    loc = (int)&matrix + ( (j - 0)*3
                       +   (i - 0)   ) * sizeof(int);
    
    printf("L0 is: %d",(int)&matrix);
    
    
    //printf("\n(%d, %d): %d",i,j,matrix[i-1][j-1]);
    
    // matrix[i-1][j-1] because in matrix[3][3] the index starts from 0
    printf("\nThe location of index(i,j): (%d,%d) with element %d is: %d\n",i,j,matrix[i][j],loc);
    
    return 0;
}
