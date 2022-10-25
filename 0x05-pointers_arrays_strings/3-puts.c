#include "main.h"
/**
  *_puts - prints a string
  *@str: pointer
  *Return:void
*/

void _puts(char *str)
{
	int kt = 0;

	while (kt >= 0)
	{
		if (str[kt] == '\0')
		{
			_putchar('\n');
		break;
	}
		_putchar(str[kt]);
		kt++;
	}
}
