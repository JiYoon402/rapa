#include <stdio.h>

int main(void){
    int tot=0;
    for(int j=1;j<=10;j++){
        if(10==j)printf("%d",j);
        else printf("%d+",j);
        tot+=j;
    }
        printf("=%d\n",tot);
    tot=0;
    for(int i=1;i<11;i++) {
        tot+=i;
        for(int j=1;j<=i;j++){
            if(i==j)printf("%d",j);
            else printf("%d+",j);
        }
        printf("=%d\n",tot);
    }
    printf("sum: %d",tot);

    return 0;
}