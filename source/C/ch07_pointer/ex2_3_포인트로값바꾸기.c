#include <stdio.h>

int main(void){
    int a=1,b=2;
    int *pointer;

    pointer=&a;
    *pointer*=3;//*pointer=*
    
    pointer=&b;
    *pointer*=3;//*pointer=*

    printf("a:%d,\tb:%d\n",a,b);
    printf("pointer:%p,\t*pointer:%d\n",pointer,*pointer);
    printf("&a:%p,\t&b:%p\t",&a,&b);

}