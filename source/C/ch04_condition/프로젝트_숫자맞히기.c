#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand( (unsigned int)time(NULL));
    int ans=rand()%100+1;
    int num;
    int chance=5;
    int max=100,min=1;
    printf("����: %d\n",ans);

    while(chance>0){
        printf("%d���� %d������ ���ڸ� ���� ������(���� ��ȸ : %d ��):",min,max,chance);
        scanf("%d",&num);
        if(num<min||num>max) printf("���� ������ �� ���� ���ڸ� �Է��ϼ���.\n");
        else if(num<ans) {
            printf("UP ��\n");
            if(num>min) min=num+1;
        }
        else if(num>ans){
            printf("DOWN ��\n");
            if(num<max) max=num-1;       
        } 
        else {
            printf("�����մϴ�. %d������ ����",6-chance);
            break;
        }
        chance--;
    }

    if(chance==0)printf("5���� ��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.");

    return 0;
}