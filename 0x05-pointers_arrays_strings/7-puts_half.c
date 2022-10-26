#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: input string
  *return: no return
*/

void puts_half(char *str)
{
	int kt = 0, i;

	while (kt >= 0)
	{
		if (str[kt] == '\0')
			break;
		kt++;
	}
	if (kt % 2 == 1)
		i = kt / 2;
	else
		i = (kt - 1) / 2;
	for (i++; i < kt; i++)
		_putchar(str[i]);
	_putchar('\n');
}
