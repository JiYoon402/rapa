#include <stdio.h>

//�迭: ���� �ڷ����� ����
int main(void){
    //�迭 ����� �Ҵ��� �и�;
    //�迭�� ũ�⸦ �������� ������ ũ�⸸ŭ �޸𸮰� ����
    int subway[10]={0};//�Ϻθ� �ʱ�ȭ �� ������ ���� 0���� �ʱ�ȭ

    for(int idx=0;idx<sizeof(subway)/sizeof(int);idx++)
        printf("subway[%d]=%d\n",idx,subway[idx]);


}