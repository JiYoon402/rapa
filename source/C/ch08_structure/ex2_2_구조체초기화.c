#include <stdio.h>

//����ü: ���� ������ �����͸� �ϳ��� ���� �ڷ�������

struct student{ //����ü ����
    int num;    //�й�(student ����ü member)
    double grade;//����

}typedef student;

void main(){
    int i;
    student s1={101,4.43};
    
    printf("�й�=%d, ����=%.2lf\n",s1.num,s1.grade);
    s1.num=151;
    s1.grade=4.1;

    printf("�й�=%d, ����=%.2lf\n",s1.num,s1.grade);
}