#include<stdio.h>

typedef struct Gameinfo{
    char *name;
    int year;
    int price;
}gameinfo;

int main(void){
    gameinfo gameinfo1={"���̹�C",2024,33000};
    gameinfo *ptr=&gameinfo1;

    printf("name:%s\t year:%d\t price:%d",ptr->name,ptr->year,ptr->price);
}