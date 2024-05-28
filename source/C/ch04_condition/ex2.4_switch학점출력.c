#include <stdio.h>

int main(void){
    int score;
    printf("점수: ");
    scanf("%d",&score);
    int temp=score==100?99:score;
    //score/=10.0;

    switch (temp/10)
    {
    case 9:
        printf("A학점"); break;
    case 8:
        printf("B학점"); break;
    case 7:
        printf("C학점"); break; 
    case 6:
        printf("D학점"); break; 
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("F학점"); break; 

    default:printf("유효하지 않은 점수입니다.");
        break;
    }

}
