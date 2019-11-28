#include <stdio.h>

int is_prime(int);

int main(int argc, char const *argv[])
{
  /* code */
  int i = 0;
  int count = 0;

  for (i = 1; i < 100; i++) {
    // 调用函数判断 i 是否为质数
    // 如果是质数，返回值为 1，条件为真，进行输出
    if (is_prime(i)) {
      // 每行第一个不空格，之后每个前面空一格
      if (count) {
        printf(" %2d", i);
      } else {
        printf("%2d", i);
      }
      // 输出完以后加一个
      count++;

      // 每输出 5 个以后换一行
      if (count == 5) {
        count = 0;
        printf("\n");
      }
    }
  }
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
