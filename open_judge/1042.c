#include <stdio.h>
#include <math.h>

int sln(int n) {
	if (n == 1 || n == 0) return 0;
	int i = 0;
	int p = 0;
	int q = 0;

	while (pow(2, i++) < n);
	p = n - pow(2, i - 2);
	q = pow(2, i - 1) - n;

	// printf("i: %d\n", i);
	// printf("p: n - %d = %d\n", (int)pow(2, i - 2), p);
	// printf("n: %d\n", n);
	// printf("q: %.0lf - n = %d\n", (double)pow(2, i - 1), q);

	return (p > q) ? i-1 : i-2;
}

int main(int argc, char const *argv[]) {
	/* code */
	int t = 0;
	scanf("%d", &t);
	printf("%d\n", sln(t));
	while (t--) {
		int n = 0;
		scanf("%d", &n);
		printf("%d\n", sln(n));
	}
	return 0;
}
