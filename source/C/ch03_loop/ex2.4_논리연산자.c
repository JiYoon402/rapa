#include <stdio.h>

//논리연산자: &&(and), ||(or), !(not)
int main(void){
    int i=1, j=10, h=10;

    //&&의 경우 앞조건이 거짓인 경우 뒷조건 시행 안함: ++j 시행 안됨
    printf("(i>j)&&(++j>h) = %s\n",(i>j)&&(++j>h)?"T":"F");
    printf("j=%d\n",j);
    
    //||의 경우 앞조건이 참인 경우 뒷조건 시행 안함: ++j 시행 안됨
    printf("(i<j)||(++j>h) = %s\n",(i<j)||(++j>h)?"T":"F");
    printf("j=%d\n",j);

    return 0;

}