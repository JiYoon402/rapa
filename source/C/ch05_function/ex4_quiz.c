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
            printf("%d�ܰ� �����Դϴ�.\n",i);
        }
        else{
            printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�.",i);
            break;
        }
    }
    if(i==4)printf("��й�ȣ�� ��� ������ϴ�. �����Դϴ�.\n");

    return 0;
}

int getRandomNumber(int level){
    return (rand()%4+1)+(level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d���� �������� ����~\n",level);
    printf("��Ʈ: %d x %d >> ",num1, num2);
}