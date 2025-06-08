#include <stdio.h>

int main(void) {
	int N;
	int i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i = i + 1) {
		for (j = 0; j < i+1; j = j + 1) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}