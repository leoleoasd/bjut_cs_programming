#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* code */
  int n = 0;
  int i = 0;
  int count = 0;
  int flag = 0;

  for (n = 2; n < 100; n++) {
    // 假设当前的 n 是质数
    flag = 1;

    // 判断 n 是不是质数
    for (i = 2; i * i <= n; i++) {
      // 非 0 为真，即，n % i 为 0 时才会执行 if 里的内容
      // 此时 n 为合数，因此将 flag 置为 0
      if (!(n % i)) {
        flag = 0;
        break;
      }
    }

    if (flag) {
      // 每行第一个不空格，之后每个前面空一格
      if (count) {
        printf(" %2d", n);
      } else {
        printf("%2d", n);
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
