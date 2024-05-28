#include<stdio.h>

int main(void){
    int num=3;

    //switch(정수형/문자형) 문자열X
    switch (num)
    {
    case 1:
        printf("주사위 1"); break;
    case 2:
        printf("주사위 2"); break;
    case 3:
        printf("주사위 3"); break; 
    case 4:
        printf("주사위 4"); break; 
    case 5:
        printf("주사위 5"); break; 
    case 6:
        printf("주사위 6"); break; 
    default:printf("주사위 아님");
        break;
    }
}