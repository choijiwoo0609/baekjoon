#include <stdio.h>

int main(void) {
	int y;

	scanf("%d", &y);

	if ((y >= 1000) & (y <= 3000)) {
		printf("%d", y - (2541 - 1998));
	}

	return 0;
}