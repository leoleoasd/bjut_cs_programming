#include <stdio.h>

// 运行代码，仔细观察输出结果，注意 end 输出的位置，体会 scanf 函数处理键盘输入的方式

int main(int argc, char const *argv[])
{
	/* code */
	int i = 0;
	char ch = 0;

	scanf("%d", &i);
	// 取消第 13 行的注释再运行，看一看结果是什么，有什么区别
	// getchar();
	printf("i: %dend\n", i);

	scanf("%c", &ch);
	printf("ch: %cend\n", ch);

	return 0;
}
