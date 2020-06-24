#include <stdio.h>
char Alpha();

void main() {
	char show;
	printf("사용자 정의 함수에서 입력한 알파벳 전달 \n");
	
	show = Alpha();
	printf("\n[main()함수 영역]\n\n");
	printf("답> 전달 받은 알파벳 : %c\n", show);
	printf("답> 아스키코드 값 : %d\n",show);

}
char Alpha() {
	char ch;
	printf("\n[Alpha()함수 영역]\n\n");
	printf("문> 알파벳 입력 : ");
	scanf_s("%c", &ch, sizeof(ch));
	return ch;
}