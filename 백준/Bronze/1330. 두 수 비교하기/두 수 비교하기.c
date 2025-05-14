int main(void) {
	long long A, B;

	scanf("%lld %lld", &A, &B);

	if (A > B) { printf(">");}
	else if (A < B) { printf("<");}
	else /*if (A = B)*/ { printf("==");}

	return 0;
}