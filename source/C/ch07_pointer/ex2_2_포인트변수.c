#include <stdio.h>

void main(){
    int a=1;
    int b=2;

    int *pointer=&a;
    *(pointer-1) *=3;

    printf("&a: %p, a: %d\n",&a,a);
    printf("&b: %p, b: %d\n",&b,*(&a-1));
    printf("pointer: %p, *p: %d\n",pointer,*pointer);

    pointer=&b;
    printf("pointer: %p, *p: %d\n",pointer,*pointer);    

}