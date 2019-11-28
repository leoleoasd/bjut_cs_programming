#include <stdio.h>

void print_a_line(int, char);

void print_first_and_last(int, char);

int main ()
{
	int line = 0;
	int column = 0;
	char ch = 0;
	int flag = 0;

	scanf("%d %d %c %d", &line, &column, &ch, &flag);

	if (flag)
	{
		for (int i = 0; i < line; i++)
		{
			print_a_line(column, ch);
		}
	}
	else
	{
		print_a_line(column, ch);
		for (int i = 0; i < line - 2; i++)
		{
			print_first_and_last(column, ch);
		}
		print_a_line(column, ch);
	}

	return 0;
}

void print_a_line(int n, char ch)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

void print_first_and_last(int n, char ch)
{
	printf("%c", ch);
	for (int i = 0; i < n - 2; i++)
	{
		printf(" ");
	}
	printf("%c\n", ch);
}
