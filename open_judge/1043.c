#include <stdio.h>

void sln (int k, int m, int n) {
	int i = 0;
	int f = 0;
	int sum = 0;
	int last = 0;
	for (i = m; i <= n; i++) {
		if (!(i % 2)) {
			printf("%d ", i);
			last = i;
			sum++;
			if (!f) f = 1;
			if (!(sum % k)) {
				printf("\n");
				f = 0;
			}
		}
	}
	while (sum % k) {
		f = 1;
		printf(" %d", last);
		sum++;
	}
	if (f) printf("\n");
}

int main(int argc, char const *argv[]) {
	/* code */
	int t = 0;
	scanf("%d", &t);
	while(t--) {
		int k, m, n;
		scanf("%d%d%d", &k, &m, &n);
		sln(k, m, n);
	}
	return 0;
}
