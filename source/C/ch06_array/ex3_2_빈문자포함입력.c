#include <stdio.h>

//�̸�(���ں�����), �ּ�(��������)�� �Է¹ޱ�
/*scanf(%s,����,�Է¹���byte��)
    white space�� ���� �� ������ ���� ������ return
*/
int main(void){
    //���ڿ� �Է¹��� ���� ������ ���� �迭�� ����(���̸�)
    char name[128];
    char address[512];

    printf("�̸� >> ");
    scanf("%s",name,sizeof(name));//name�� �뷮 ���Ϸ� �Է¹���
    //gets(name);
    gets(address);//���� ����� �뵵
    printf("�ּ� >> ");
    gets(address);
    //scanf("%s",address, sizeof(address));

    printf("�Է��� �̸� : %s\n",name);
    printf("�Է��� �ּ� : %s\n",address);

    return 0;
}