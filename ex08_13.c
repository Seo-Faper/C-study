#include <stdio.h>
char Alpha();

void main() {
	char show;
	printf("����� ���� �Լ����� �Է��� ���ĺ� ���� \n");
	
	show = Alpha();
	printf("\n[main()�Լ� ����]\n\n");
	printf("��> ���� ���� ���ĺ� : %c\n", show);
	printf("��> �ƽ�Ű�ڵ� �� : %d\n",show);

}
char Alpha() {
	char ch;
	printf("\n[Alpha()�Լ� ����]\n\n");
	printf("��> ���ĺ� �Է� : ");
	scanf_s("%c", &ch, sizeof(ch));
	return ch;
}