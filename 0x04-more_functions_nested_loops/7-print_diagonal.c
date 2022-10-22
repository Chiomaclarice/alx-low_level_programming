#include "main.h"
/**
  * print_diagonal- print diagonal line n times
  * @n:-number of times diagonal n line is printed
  * Return: no return
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}

		_putchar(92);
		if (n == 0 || n < 0)

		_putchar('\n');
	}

		_putchar('\n');
}
