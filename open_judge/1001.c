#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  // 代码规范：多个变量，一行定义一个，且都要进行初始化（赋初始值）
  // 代码规范：运算符两边空一格，增强代码可读性
  int a = 0;
  int b = 0;

  // 代码规范：逗号后空一格
  scanf("%d%d", &a, &b);

  printf("%d\n", a+b);
  return 0;
}
