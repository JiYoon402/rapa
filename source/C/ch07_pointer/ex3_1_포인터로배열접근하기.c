#include <stdio.h>

void main(){
    int arr[3]={10,20,30};

    int*ptr=arr;

    for(int i=0;i<3;i++){
        printf("arr[%d]=%d\t",i,arr[i]);
        printf("*(arr+%d)=%d\t",i,*(arr+i));
        printf("ptr[%d]=%d\t",i,ptr[i]);
        printf("*(ptr+%d)=%d\n",i,*(ptr+i));
    }

    printf("=======ptr¼öÁ¤========\n");
    ptr[0]=99; ptr[1]=88; ptr[2]=77;

    for(int i=0;i<3;i++){
        printf("arr[%d]=%d\t",i,arr[i]);
        printf("*(arr+%d)=%d\t",i,*(arr+i));
        printf("ptr[%d]=%d\t",i,ptr[i]);
        printf("*(ptr+%d)=%d\n",i,*(ptr+i));
    }

    return 0;
}