#include <stdio.h>
long Fact(int n);
void main() {
	int input;
	long result;

	printf("����> ���丮�� ���� ���� �Է� : ");
	scanf_s("%d", &input);
	printf("ȣ��> Fact()�Լ� ȣ���Ͽ� ���丮�� ���\n");

	result = Fact(input);
	printf("ȸ��> %d! : %2ld\n", input, result);
}
long Fact(int n) {
	if (n <= 1)
		return 1;
	else {
		printf("����> %d! : %d * (%d - 1)\n", n, n, n);
		return(n * Fact(n - 1));
	}
}