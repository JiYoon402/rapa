#include <stdio.h>

int main(void) {

	char name[100],gender[5];
	int kor, eng, math;

	printf("이름을 입력하세요 :");
	scanf_s("%s", name,(unsigned)sizeof(name));
	printf("성별을 입력하세요(남/여) :");
	scanf_s("%s", gender,(unsigned)sizeof(gender));
	printf("국어 영어 수학 점수를 입력하세요 :");
	scanf_s("%d%d%d", &kor, &eng, &math);

	printf("--- 학생정보 ---\n");
	printf("이름 : %s\n성별 : %s\n", name, gender);
	printf("국어 = %d\n영어 = %d\n수학 = %d\n", kor, eng, math);
	printf("합계 = %d\n평균 = %.2lf", kor + eng + math, (kor + eng + math) / 3.0);

	return 0;
}