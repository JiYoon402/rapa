#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define swap(a,b,t){t=a;a=b;b=t;}

void sort(int* arr,int cnt){
    int t;
    for(int i=0;i<cnt-1;i++){
        for(int j=i+1;j<cnt;j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j],t);
        }
    }
}

int* make_lotto(){
    static int lotto[6];
    srand((unsigned int)time(NULL));//���� �߻�
    int i=0;
    while(i<6){
        int temp=rand()%45+1;
        int duplication_check=1;
        
        for(int j=0;j<i;j++){
            if(temp==lotto[j]){
                duplication_check=0;
                //printf("�ٽû���\n");
                break;
            }
        }

        if(duplication_check){
            lotto[i]=temp;
            i++;
        }
    }
    return lotto;
}

void main(){

    int *lotto=make_lotto();

    printf("������ :");
    for(int i=0;i<6;i++) printf(" %d",lotto[i]);

    sort(lotto,6);

    printf("\n������ :");
    for(int i=0;i<6;i++) printf(" %d",lotto[i]);

}