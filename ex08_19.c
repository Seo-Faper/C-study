#include <stdio.h>
int Call_ref(int* su);
void main() {
	int num = 100, after;

	printf("[main() �Լ� ����]\n");
	printf("��> �Լ� ȣ���ϱ� ���� �� : %d\n", num);
	printf("��> �Լ� ȣ�� : �μ��� �ּ� ���� ������ &�� �Բ� ����\n\n");
	after = Call_ref(&num);

	printf("[main() �Լ� ����]\n");
	printf("��> �Լ� ���� �� : %d\n\n",after);
}
int Call_ref(int* su) {
	printf("[Call_ref() �Լ� ����]\n");
	printf("����> ���޹��� �ּҿ� ����� ���� 100 + 5 ��ȯ\n\n");
	*su += 5;
	return *su;
}