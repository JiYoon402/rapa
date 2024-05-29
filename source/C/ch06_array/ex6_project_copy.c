#include <stdio.h>

int main(void){
    char* names[5]={"유수민","김현식","땅땅이","새대갈","슘당이"};
    int arrHeight[5];
    int maxHeight=-1,minHeight=999;
    int idxMax,idxMin;
    int totHeight=0;

    for(int i=0;i<5;i++){
        printf("%s의 키는? ",names[i]);
        scanf("%d",&arrHeight[i]);
    }
 

    for(int i=0;i<5;i++){
        if(arrHeight[i]>maxHeight) {
            maxHeight=arrHeight[i];
            idxMax=i;
        }
        else if(arrHeight[i]<minHeight) {
            minHeight=arrHeight[i];
            idxMin=i;
        }

        totHeight+=arrHeight[i];
    }

    printf("- 평균키 : %.2f\n",totHeight/5.0);
    printf("- 최장신 친구 %s의 키는 %d\n",names[idxMax],maxHeight);
    printf("- 최단신 친구 %s의 키는 %d\n",names[idxMin],minHeight);

    return 0;

}