#include <stdio.h>

int main(void) {
	
	int hour, min;

	scanf("%d %d", &hour, &min);

	//min = min - 45;
	min -= 45;

	if (min < 0) { 
		hour -= 1;
		min += 60;
	}
	if (hour < 0) { hour += 24; }

	printf("%d %d", hour, min);

	return 0;
}