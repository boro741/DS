#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    p = calloc(10,sizeof(int)); // Makes array of 10 elements

    for(int i=0;i<10;i++){
        p[i] = i+5;
    }

    for(int i=0;i<10;i++){
       // printf(" %d ",p[i]);
    }
    //free(p);
    printf("\n");
    p = realloc(p,12*sizeof(int));


    printf(" %d ",p[4]);
    


    return 0;
}