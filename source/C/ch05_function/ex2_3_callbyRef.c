#include <stdio.h>
void sum(int from,int to,int *tot);

int main(void){
    int a=1, b=10,ans;

    sum(a,b,&ans);
    printf("%d���� %d������ ���� %d�Դϴ�.\n",a,b,ans);

    a=10;b=100;
    sum(a,b,&ans);
    printf("%d���� %d������ ���� %d�Դϴ�.\n",a,b,ans);


}

void sum(int from,int to,int *tot){
    *tot=0;
    for(int i=from;i<=to;i++) *tot+=i;    
}