#include <stdio.h>
void Ex(float a);
void main() {
	float input;
	printf("��ġ(inch)�� ��Ƽ����(cm)���� ��ȯ\n");
	printf("��> ��ġ �Է� : ");
	scanf_s("%f", &input);

	printf("\n");
	Ex(input);
	printf("\n");
}
void Ex(float a) {
	double swap;
	swap = a * 2.5399;
	printf("[Ex()�Լ� ����]\n");
	printf("��> ���� ȯ�� : %.2finch�� %.2lfcm\n", a, swap);
}