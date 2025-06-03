#include <stdio.h>

int main(void) {
	int T, A, B;
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i = i + 1) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}
	return 0;
}