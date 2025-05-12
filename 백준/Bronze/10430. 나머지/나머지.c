#include <stdio.h>

int main(void) {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	int v_1, v_2, v_3, v_4;
	v_1 = (A + B) % C;
	v_2 = ((A % C) + (B % C)) % C;
	v_3 = (A * B) % C;
	v_4 = ((A % C) * (B % C)) % C;

	printf("%d\n%d\n%d\n%d", v_1, v_2, v_3, v_4);
	return 0;
}