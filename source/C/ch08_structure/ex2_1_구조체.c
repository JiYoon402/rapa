#include <stdio.h>

//����ü: ���� ������ �����͸� �ϳ��� ���� �ڷ�������

struct student{ //����ü ����
    int num;    //�й�(student ����ü member)
    double grade;//����

}typedef student;

void main(){
    int i;
    student s1;
    s1.num=101;
    s1.grade=4.43;

    printf("�й�=%d, ����=%.2lf\n",s1.num,s1.grade);
}