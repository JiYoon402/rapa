#include <stdio.h>
#include <stdbool.h>
//비교연산자: < <= > >= == !=
//삼항연산자: 조건 ? (조건이 참일 때의 값):(조건이 거짓일 때의 값)
int main(void){
    int n1=10;
    int n2=5;
    int res=(n1<n2);
    bool res_bool=n1<n2;//True, False

    printf("%d %s %d는 %s\n",n1,"<",n2,res_bool);//bool 출력 불가
    printf("%d %s %d는 %s\n",n1,"<",n2,res_bool?"참":"거짓");

    return 0;
}