#include <stdio.h>
#include <string.h>

int main(void){

    int i=10;
    int *j=&i;

    i=99;
    printf("j: %d\n",*j);

    char str1[10]="Hello";
    char str2[10];//=str1;str1의 주소를 str2에 할당(얕은복사)
    strcpy(str2,str1);//str1의 문자열을 str2에 깊은 복사
    
    str1[0]='h';
    str1[1]='i';
    str1[2]='\0';
   
    printf("str1: %s\nstr2: %s",str1,str2);



    return 0;
}