#include <stdio.h>

int main(int argc, char const *argv[]) {
	/* code */
	int i = 0;
	scanf("%d", &i);

	printf("%d\\%d\\%d", i / 100, i / 10 % 10, i % 10);

	return 0;
}
