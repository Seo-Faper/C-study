#include <stdio.h>
void Test(int num1, int num2);
void main() {
	int a = 3, b = 5, hap = 0;
	
	printf("void���� ���� ����ϸ� ���� �߻�\n");
	printf("\n\n[main() �Լ� ����]\n\n");
	printf("��> �� ���� ���� ���ϴ� �Լ� ȣ��\n");
	
	Test(a, b);



}
void Test(int num1, int num2) {
	int sum = 0;

	sum = num1 + num2;
	printf("\n\n[Test() �Լ� ����]\n\n");
	printf("\n\n[main()�Լ� ����]\n\n");
	printf("��> �� ���� �� : %d\n", sum);
}