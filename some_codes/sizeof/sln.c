#include <stdio.h>

int main () {
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));

	printf("%b\n", -1);
	int c = 5;
	c = c * (c++);
	printf("%d\n", c);
	return 0;
}
