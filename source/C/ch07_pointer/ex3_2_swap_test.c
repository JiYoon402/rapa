#include <stdio.h>

#define swap_m(a,b,t){t=a;a=b;b=t;}

void swap_val(int a, int b){
    int t;
    t=a; a=b; b=t;
}

void swap_ref(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void main(){
    int a=10,b=20;
    int t;

    printf("org: a:%d b:%d\n",a,b);
    swap_m(a,b,t);
    printf("mac: a:%d b:%d\n",a,b);
    swap_val(a,b);
    printf("val: a:%d b:%d\n",a,b);
    swap_ref(&a,&b);
    printf("Ref: a:%d b:%d\n",a,b);


}