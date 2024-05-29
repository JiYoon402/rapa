#include <stdio.h>

int* returnArray(int *ptr){
    static int resultArr[3];
    for(int i=0;i<3;i++){
        resultArr[i]=ptr[i];
    }
    resultArr[1]=99;

    return resultArr;
}

void main(){
    int arr[3]={10,20,30};
    int *afterArr=returnArray(arr);

    printf("수정전:");
    for(int i=0;i<3;i++){
        printf("arr[%d]=%d\t",i,arr[i]);
    }

    printf("\n수정후:");
    for(int i=0;i<3;i++){
        printf("afterArr[%d]=%d\t",i,afterArr[i]);
    }
}