#include<stdio.h>

int main()
{
    int x = 99, y = 3, z = 13;
    int i,j,temp = 0;
    int arr[3] = {0};
    int arrLength;

    if (x%2 != 0){
        arr[0] = x;
    }

    if (y%2 != 0){
        arr[1] = y;
    }    

    if (z%2 != 0){
        arr[2] = z;
    }

    for (i=0;i<3;i++){
        

       for(j=0;j<3;j++){
           if(arr[i] > arr[j]){
               // Swap
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }

        //printf("%d\n",arr[i]);
    }


for (i=0;i<3;i++){
    printf("%d\n",arr[i]);
}    



    return 0;
}