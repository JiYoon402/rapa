#include <stdio.h>

int main(void){
    int from=1,to=100;
    int tot=0;

    for(int i=from;i<=to;i++){
        tot+=i;
    }
    printf("%d부터 %d까지 누적합: %d\n",from,to,tot);
    from=10; to=100;
    tot=0;
        for(int i=from;i<=to;i++){
        tot+=i;
    }
    printf("%d부터 %d까지 누적합: %d\n",from,to,tot);

    return 0;
}