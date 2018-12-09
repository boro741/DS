#include<stdio.h>

int main(){
    int a[2][2] = {1,2,3,4};
    
    int (*p)[2];
    p = a;

    printf("%d\n",*(*(p)+1));

    return 0;
}