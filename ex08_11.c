#include <stdio.h>
void NE();
void D_Dash();
void Dash();

void main() {
	printf("�Ű������� ��ȯ���� ��� ���� �Լ� Ÿ��\n");
	Dash();

	printf("����� ���� �Լ��� ȣ���մϴ�.\n");
	Dash();

	NE();
	Dash();
	printf("���α׷��� �����մϴ�.\n");
	D_Dash();
}
void NE() {
	printf("\n[����� ���� Dash()�Լ� ����]\n\n");
}
void D_Dash() {
	printf("========\n");
}
void Dash() {
	printf("--------\n");
}