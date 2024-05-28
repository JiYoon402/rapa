#include <stdio.h>

//출력을 원하는 구구단 수를 입력 받아 해당 구구단 출력
int main(void){
    int num=3;
    printf("입력:");
    //scanf("%d",&num);

    for(int i=1;i<10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }

}