#include <stdio.h>

void swap_addr(int *a,int *b){//call by reference
    printf("(�Լ�)�� &a=%p, a=%d, &b=%p, b=%d\n",a,*a,b,*b);
    int t=*a;
    *a=*b;*b=t;
    printf("(�Լ�)�� &a=%p, a=%d, &b=%p, b=%d\n",a,*a,b,*b);
}


void main(){
    int a=10,b=20;
    printf("(main)�� &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);
    swap_addr(&a,&b);
    printf("(main)�� &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);
}