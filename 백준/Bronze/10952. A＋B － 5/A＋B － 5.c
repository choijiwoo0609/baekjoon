#include <stdio.h>

int main(void) {

	int A, B;
	
	for (;;) {
		scanf("%d %d", &A, &B);

		if (A + B == 0) {
			break;
		}
		else {
			printf("%d\n", A + B);
		}
	}
	return 0;
}