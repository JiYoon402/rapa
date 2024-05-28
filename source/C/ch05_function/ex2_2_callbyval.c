#include<stdio.h>

int sum(int from,int to);//함수 선언


int main(void){
    int a=1,b=100;
    int tot=sum(a,b);
    printf("%d\n",tot);
    printf("%d",sum(1,10));
}

int sum(int from, int to){//함수 정의
    int res=0;
    for(int i=from;i<=to;i++) res+=i;
    return res;
}