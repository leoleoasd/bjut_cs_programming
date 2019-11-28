#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  // 字符同样可以用 数字 0 进行初始化
  char ch = 0;

  scanf("%c", &ch);
  // 进行字符相关的处理时，一律用字符直接运算，不要使用 ASCII 码参与运算！
  printf("%c\n", ch - 'a' + 'A');

  return 0;
}
