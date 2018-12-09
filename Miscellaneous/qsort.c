#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void *a,const void *b){
    int aa,bb;

    aa = *(int *)a;
    bb = *(int *)b;

    return (aa-bb);
}

int main(){

    int a[] = {3,2,4,7,1,9};

    qsort(a,6,sizeof(int),comparefunc);

    for(int i=0;i<6;i++){
        printf(" %d \n",a[i]);
    }

    return 0;
}