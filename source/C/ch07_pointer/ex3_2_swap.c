#include <stdio.h>

void swap(int a,int b){//call by value
    printf("(함수)전 &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);
    int t=a;
    a=b;b=t;
    printf("(함수)후 &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);
}


void main(){
    int a=10,b=20;
    printf("(main)전 &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);
    swap(a,b);
    printf("(main)후 &a=%p, a=%d, &b=%p, b=%d\n",&a,a,&b,b);




}