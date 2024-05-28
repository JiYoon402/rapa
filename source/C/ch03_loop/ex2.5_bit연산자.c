#include <stdio.h>

//비트연산자: &(and), |(or), ^(xor:같으면 0, 다르면 1), <<(shift)
int main(void){
    int n1=10; //0 ~ 01010(8 0 2)
    int n2=6;//0 ~ 00110(0 4 2)

    //n1&n2:0 ~ 00010(0 0 2)
    //n1|n2:0 ~ 01110(8 4 2)
    //n1^n2:0 ~ 01100(8 4 0)

    printf("n1&n2:%d\n",n1&n2);
    printf("n1|n2:%d\n",n1|n2);
    printf("n1^n2:%d\n",n1^n2);
    printf("n2<<1=%d\n",n2<<1);//<<shift는 2배
    printf("n2>>1=%d\n",n2>>1);//>>shift는 1/2배

    return 0;
}