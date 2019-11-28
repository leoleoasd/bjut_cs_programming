#include <stdio.h>

double fact(int n) {
	double res = 1;
	while (n--) {
		res *= (n + 1);
	}
	return res;
}

int main(int argc, char const *argv[]) {
	/* code */
	int t = 0;
	int n = 0;
	scanf("%d", &t);
	printf("%.0lf\n", fact(t));
	while (t--) {
		scanf("%d", &n);
		printf("%.0lf\n", fact(n));
	}
	return 0;
}
