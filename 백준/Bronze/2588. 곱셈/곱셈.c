#include <stdio.h>

int main(void) {
	int i_1, i_2;

	scanf("%d", &i_1);
	scanf("%d", &i_2);

	int v_1, v_10, v_100;
	int answer;

	v_1 = i_2 % 10;				// i_2의 1의 자리
	v_10 = (i_2 / 10) % 10;		// i_2의 10의 자리
	v_100 = (i_2 / 100) % 10;	// i_2의 100의 자리

	answer = i_1 * i_2;

	printf("%d\n%d\n%d\n%d", i_1 * v_1, i_1 * v_10, i_1 * v_100, answer);	
}