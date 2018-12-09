#include<stdio.h>

int main(){
    int *p, **q;
    int i = 2;

    p = &i;

    q = &p;

    printf("%d\n",*p);
    printf("%d\n",**q);
    return 0;
}