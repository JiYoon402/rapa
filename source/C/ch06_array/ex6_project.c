#include <stdio.h>

int main(void){
    char* name[]={"������","������","������","���밥","������"};
    int max=0,min=200;
    int imax,imin;
    int sum=0;
    int h;
 

    for(int i=0;i<5;i++){
        printf("%s�� Ű��? ",name[i]);
        scanf("%d",&h);

        if(h>max) {
            max=h;
            imax=i;
        }
        else if(h<min) {
            min=h;
            imin=i;
        }

        sum+=h;
    }

    printf("- ���Ű : %.2f\n",sum/5.0);
    printf("- ����� ģ�� %s�� Ű�� %d\n",name[imax],max);
    printf("- �ִܽ� ģ�� %s�� Ű�� %d\n",name[imin],min);

    return 0;

}