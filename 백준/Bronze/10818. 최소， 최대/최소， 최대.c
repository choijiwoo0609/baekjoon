#include <stdio.h>

int main(void) {
	int N;
	int i;
	int value, max_value, min_value;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &value);
		if (i == 0) {
			max_value = value;
			min_value = value;
		}
		if (value > max_value) {
			max_value = value;
		}
		if (value < min_value) {
			min_value = value;
		}
	}

	printf("%d %d", min_value, max_value);

	return 0;
}