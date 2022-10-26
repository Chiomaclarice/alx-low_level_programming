#include "main.h"
/**
  *puts2 - prints one char out of a string
  *@str: input string
  *return: no return
*/

void puts2(char *str)
{
	int kt = 0;

	while (kt >= 0)
	{
		if (str[kt] == '\0')
		{
			_putchar('\n');
		break;
	}
	if (kt % 2 == 0)
		_putchar(str[kt]);
	kt++;
}
}
