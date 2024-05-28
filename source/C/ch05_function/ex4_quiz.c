#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

int main(void){
    srand((unsigned int)time(NULL));
    int a,b,ans;
    int i;

    for(i=1;i<4;i++){
        a=getRandomNumber(i);
        b=getRandomNumber(i);

        showQuestion(i,a,b);
        scanf("%d",&ans);
        if(ans==a*b){
            printf("%d단계 정답입니다.\n",i);
        }
        else{
            printf("%d단계 오답입니다. 실패 종료입니다.",i);
            break;
        }
    }
    if(i==4)printf("비밀번호를 모두 맞췄습니다. 성공입니다.\n");

    return 0;
}

int getRandomNumber(int level){
    return (rand()%4+1)+(level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d레벨 구구단을 외자~\n",level);
    printf("힌트: %d x %d >> ",num1, num2);
}