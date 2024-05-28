#include <stdio.h>

//같은 이름의 함수 선언 불가
void line(int cnt);//반환값이 없는 함수 선언
void noArg();//매개변수가 없는 함수 선언

int main(void){
    line(40);//함수 호출
    noArg();
    line(50);
}

void line(int cnt){//함수 구현/정의
    for(int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}

void noArg(){
    printf("반환값도 매개변수도 없는 함수\n");
}