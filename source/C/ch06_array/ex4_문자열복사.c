#include <stdio.h>
#include <string.h>

int main(void){

    int i=10;
    int *j=&i;

    i=99;
    printf("j: %d\n",*j);

    char str1[10]="Hello";
    char str2[10];//=str1;str1�� �ּҸ� str2�� �Ҵ�(��������)
    strcpy(str2,str1);//str1�� ���ڿ��� str2�� ���� ����
    
    str1[0]='h';
    str1[1]='i';
    str1[2]='\0';
   
    printf("str1: %s\nstr2: %s",str1,str2);



    return 0;
}