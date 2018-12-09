#include<stdio.h>

void print(){
    printf("Hello WOrld\n");
}

int main()
{
   void (*p)();

   p = print;

    p();
   return 0;
}