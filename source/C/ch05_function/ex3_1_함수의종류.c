#include <stdio.h>

//���� �̸��� �Լ� ���� �Ұ�
void line(int cnt);//��ȯ���� ���� �Լ� ����
void noArg();//�Ű������� ���� �Լ� ����

int main(void){
    line(40);//�Լ� ȣ��
    noArg();
    line(50);
}

void line(int cnt){//�Լ� ����/����
    for(int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}

void noArg(){
    printf("��ȯ���� �Ű������� ���� �Լ�\n");
}