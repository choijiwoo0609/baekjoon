#include <stdio.h>

int main(void) {
	int M, N, O;
	int i;
	int count = 0;

	scanf("%d", &N);

	int a[100];

	for (i = 0; i < N; i++) {
		scanf("%d", &O);
		a[i] = O;

	}

	scanf("%d", &M);
	for (i = 0; i < N; i++) {
		if (a[i] == M) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}