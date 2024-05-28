#include <stdio.h>

//배열: 동일 자료형의 집합
int main(void){
    //배열 선언과 할당을 분리;
    //배열의 크기를 생략하지 않으면 크기만큼 메모리가 잡힘
    int subway[10]={0};//일부만 초기화 시 나머지 공간 0으로 초기화

    for(int idx=0;idx<sizeof(subway)/sizeof(int);idx++)
        printf("subway[%d]=%d\n",idx,subway[idx]);


}