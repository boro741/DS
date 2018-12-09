#include<stdio.h>

int main(){
    int a[3] = {1,2,3};
    int *p;
    p = a;

    printf("%d\n",*(p+1));
}