#include <stdio.h>

int main(void) {
	
	int i, j;

	scanf("%d", &i);
	scanf("%d", &j);

	if ((i > 0) & (j > 0)) { printf("1"); }
	else if ((i < 0) & (j > 0)) { printf("2"); }
	else if ((i < 0) & (j < 0)) { printf("3"); }
	else { printf("4"); }
	return 0;
}