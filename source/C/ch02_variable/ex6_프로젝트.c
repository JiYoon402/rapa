#include <stdio.h>

int main(void) {

	char name[100],gender[5];
	int kor, eng, math;

	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name,(unsigned)sizeof(name));
	printf("������ �Է��ϼ���(��/��) :");
	scanf_s("%s", gender,(unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� :");
	scanf_s("%d%d%d", &kor, &eng, &math);

	printf("--- �л����� ---\n");
	printf("�̸� : %s\n���� : %s\n", name, gender);
	printf("���� = %d\n���� = %d\n���� = %d\n", kor, eng, math);
	printf("�հ� = %d\n��� = %.2lf", kor + eng + math, (kor + eng + math) / 3.0);

	return 0;
}