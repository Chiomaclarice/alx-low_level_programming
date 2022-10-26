#include "main.h"
/**
  *print_rev - function prints string in reverse
  *@s: pointer
  *return: void
*/

void print_rev(char *s)
{
	int kt = 0;

	while (kt >= 0)
	{
		if (s[kt] == '\0')
			break;
		kt++;
	}
	for (kt--; kt >= 0; kt--)
		_putchar(s[kt]);
	_putchar('\n');

}
