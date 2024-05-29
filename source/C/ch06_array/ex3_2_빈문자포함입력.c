#include <stdio.h>

//이름(빈문자불포함), 주소(빈문자포함)를 입력받기
/*scanf(%s,변수,입력받을byte수)
    white space가 오면 그 이전의 버퍼 내용을 return
*/
int main(void){
    //문자열 입력받을 때는 포인터 말고 배열로 선언(길이모름)
    char name[128];
    char address[512];

    printf("이름 >> ");
    scanf("%s",name,sizeof(name));//name의 용량 이하로 입력받음
    //gets(name);
    gets(address);//버퍼 지우는 용도
    printf("주소 >> ");
    gets(address);
    //scanf("%s",address, sizeof(address));

    printf("입력한 이름 : %s\n",name);
    printf("입력한 주소 : %s\n",address);

    return 0;
}