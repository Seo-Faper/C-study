#include <stdio.h>
void Ex(float a);
void main() {
	float input;
	printf("인치(inch)를 센티미터(cm)으로 전환\n");
	printf("문> 인치 입력 : ");
	scanf_s("%f", &input);

	printf("\n");
	Ex(input);
	printf("\n");
}
void Ex(float a) {
	double swap;
	swap = a * 2.5399;
	printf("[Ex()함수 영역]\n");
	printf("답> 단위 환산 : %.2finch는 %.2lfcm\n", a, swap);
}