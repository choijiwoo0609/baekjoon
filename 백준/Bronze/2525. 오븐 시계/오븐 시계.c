#include <stdio.h>

int main(void) {

	int hour, min;
	int time;

	scanf("%d %d", &hour, &min);
	scanf("%d", &time);

	min += time;

	for (int i = 0; min / 60; i++) {
		hour += 1;
		min -= 60;
	}

	if (hour >= 24) {hour -= 24;}

	printf("%d %d", hour, min);

	return 0;
}