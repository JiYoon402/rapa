#include <stdio.h>

struct student{
    int id;//�й�
    char name[20];//�̸� char* name=>scanf�ÿ� �ȵ�!
    double grade;
}typedef student;

void stPrint(student s){
    printf("id:%d\t name:%s\t grade:%.2lf\n",s.id,s.name,s.grade);
}

void main(){
    student sArr[3]={{101,"ȫ�浿",4.43},{104,"��浿",4.23},{151,"���浿",4.13}};
    printf("�й�\t �̸�\t\t ����\n");   
    for(int i=0;i<3;i++){
        stPrint(sArr[i]);
    }

}
