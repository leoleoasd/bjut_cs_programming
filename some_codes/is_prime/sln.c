#include <stdio.h>

int is_prime(int);

int main(int argc, char const *argv[])
{
	/* code */
	int i = 0;
	for (i = 1; i < 100; i++)
		// C 语言中所有条件判断的结果：如果结果为真，结果是 1，否则，结果为 0，这一点，可以用 printf 看一看
		if(is_prime(i)) printf("%d ", i);
	return 0;
}

int is_prime(int num) {
	int i = 0;
	// here is the key! i * i <= num
	// 这一个条件判断让它的时间复杂度从 n 降到了 根号n
	for (i = 2; i * i <= num; i++) {
		if (!(num % i)) return 0;
	}
	// here is another key!
	// 1 不是质数也不是合数，因此当输入数据为 1 时应当返回 false（即：0）
	return num != 1;
}
