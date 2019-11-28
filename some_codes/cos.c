#include <stdio.h>
#include <math.h>

int main () {
  // 度数转弧度
  double x = 60 * M_PI / 180;

  double result = 1;
  double factorial = 1;
  double add = 1;
  int m = 1;
  int i = 0;

  // 循环停止条件，增加的量比 10^-6 大，或者比 -10^-6 小，就继续循环
  // 1e-6 的意思是 1 * 10^-6
  // 因为增量有正有负，判断的时候应当是两个条件
  while (add > 1e-6 || add < -1e-6) {
    // 阶乘，第一次乘上去的是 2 和 1
    // 随着 m 的增长，每次会乘上 2m 和 2m - 1 这两个数
    factorial = factorial * 2 * m * (2 * m - 1);

    // 泰勒公式的增量
    add = pow(-1, m) * pow(x, 2*m) / factorial;

    result += add;

    m++;
  }

  printf("%2.6lf\n", result);

  return 0;
}
