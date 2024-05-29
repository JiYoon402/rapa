#include <stdio.h>

int main(void){
    char* name[]={"유수민","김현식","땅땅이","새대갈","슘당이"};
    int max=0,min=200;
    int imax,imin;
    int sum=0;
    int h;
 

    for(int i=0;i<5;i++){
        printf("%s의 키는? ",name[i]);
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

    printf("- 평균키 : %.2f\n",sum/5.0);
    printf("- 최장신 친구 %s의 키는 %d\n",name[imax],max);
    printf("- 최단신 친구 %s의 키는 %d\n",name[imin],min);

    return 0;

}