#include <stdio.h>

//배열: 동일 자료형의 집합
int main(void){
    //배열 선언과 할당을 분리;
    int subway[3];
    subway[0]=30;subway[1]=40;subway[2]=50;

    for(int idx=0;idx<3;idx++)
        printf("subway[%d]=%d\n",idx,subway[idx]);

    int ele[3]={0,1,2};

    for(int idx=0;idx<3;idx++)
        printf("subway[%d]=%d\n",idx,ele[idx]);
}