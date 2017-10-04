/******* 2D - Array  Calculating location ********/
/******* RMO *****************/
#include <stdio.h>


int matrix[3][3] = {1,2,3,
                    4,5,6,
                    7,8,9 };


/* Matrix:
 *  00 01 02  -->
 *  10 11 12  -->
 *  20 21 22  -->
 */
int main()
{
    int i,j,loc;
    
    printf("\nEnter the index(i,j) of element you want to retrieve: ");
    scanf("%d %d",&i,&j);
    
    loc = (int)&matrix + ( (i - 0)*3
                       +   (j - 0)   ) * sizeof(int);
    
    printf("L0 is: %d",(int)&matrix);
    
    
    //printf("\n(%d, %d): %d",i,j,matrix[i-1][j-1]);
    
    // matrix[i-1][j-1] because in matrix[3][3] the index starts from 0
    printf("\nThe location of index(i,j): (%d,%d) with element %d is: %d\n",i,j,matrix[i][j],loc);
    
    return 0;
}
