#include <stdio.h>

int main(void){
    char* names[5]={"������","������","������","���밥","������"};
    int arrHeight[5];
    int maxHeight=-1,minHeight=999;
    int idxMax,idxMin;
    int totHeight=0;

    for(int i=0;i<5;i++){
        printf("%s�� Ű��? ",names[i]);
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

    printf("- ���Ű : %.2f\n",totHeight/5.0);
    printf("- ����� ģ�� %s�� Ű�� %d\n",names[idxMax],maxHeight);
    printf("- �ִܽ� ģ�� %s�� Ű�� %d\n",names[idxMin],minHeight);

    return 0;

}