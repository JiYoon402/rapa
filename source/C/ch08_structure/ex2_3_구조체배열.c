#include <stdio.h>

struct student{
    int id;//학번
    char name[20];//이름 char* name=>scanf시엔 안됨!
    double grade;
}typedef student;

void stPrint(student s){
    printf("id:%d\t name:%s\t grade:%.2lf\n",s.id,s.name,s.grade);
}

void main(){
    student sArr[3]={{101,"홍길동",4.43},{104,"고길동",4.23},{151,"감길동",4.13}};
    printf("학번\t 이름\t\t 학점\n");   
    for(int i=0;i<3;i++){
        stPrint(sArr[i]);
    }

}
