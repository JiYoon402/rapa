#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//난수발생 전 초기화 작업 필수
//rand(): 0~32767 범위의 난수 발생 
int main(void){

    srand((unsigned int)time(NULL));//난수 초기화
    printf("%d\n",rand()%100);//0~99
    printf("%d\n",rand()%100+1);//1~100
    printf("%d\n",rand()%45+1);

    return 0;
}