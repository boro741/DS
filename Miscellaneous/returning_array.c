#include <stdio.h>

int *fun(){
    int *x;
    static int y[4] = {1,2,3,4};
    x = &y;

    return x;
}


int main(){

    int *a;

    a = fun();

    for(int i=0;i<4;i++){
        printf(" %d \n",a[i]);
    }
    
    return 0;
}