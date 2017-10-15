/***** Display Square Matrix using 1D array ******/

/*
  NOTES: 
    
      0   1   2
 -----------------
  0 | 00  01  02
  1 | 10  11  12
  2 | 20  21  22
               3*3  (row * col)
 
 2D to 1D Formula:
 =================
    index = x * row + y
 
 1D to 2D formula: 
 ================
    x = index / row
    y = index % row
 */


#include <stdio.h>

int main(){
    int a[9] = {0,1,2,3,4,5,6,7,8};
    int index,rowLength,x,y;
    
    printf("Enter the row and column: ");
    scanf("%d %d",&x,&y);
    
    // Sice 3*3 Matrix
    
    rowLength = 3;
    // Formula to retrieve
    index = x*rowLength + y;
    
    printf("The elment you retrieved is: %d\n",a[index]);
    
    
    
    return 0;
}

