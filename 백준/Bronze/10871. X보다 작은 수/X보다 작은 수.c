#include <stdio.h>

int main(void) {
	int N;
	int M;
	int arr[10000];
	int X;
	int i;
	int count = 0;

	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++) {
		scanf("%d", &M);
		if (X > M) {
			arr[count] = M;
			count++;
		}
	}

	for (i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}