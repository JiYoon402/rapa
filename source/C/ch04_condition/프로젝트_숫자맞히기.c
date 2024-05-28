#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand( (unsigned int)time(NULL));
    int ans=rand()%100+1;
    int num;
    int chance=5;
    int max=100,min=1;
    printf("정답: %d\n",ans);

    while(chance>0){
        printf("%d부터 %d사이의 숫자를 맞춰 보세요(남은 기회 : %d 번):",min,max,chance);
        scanf("%d",&num);
        if(num<min||num>max) printf("수의 범위를 잘 보고 숫자를 입력하세요.\n");
        else if(num<ans) {
            printf("UP ↑\n");
            if(num>min) min=num+1;
        }
        else if(num>ans){
            printf("DOWN ↓\n");
            if(num<max) max=num-1;       
        } 
        else {
            printf("축하합니다. %d번만에 성공",6-chance);
            break;
        }
        chance--;
    }

    if(chance==0)printf("5번의 모든 기회를 사용했어요. 아쉽게도 실패했습니다.");

    return 0;
}