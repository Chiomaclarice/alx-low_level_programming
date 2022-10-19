#include "main.h"
/**
  *islower-check if character is lowercase
  *@c:character to check if it is lowercase
  *Return: 1 if c is lower otherwise 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
else
{
		 _putchar('0');
}
		_putchar('\n');
		return (0);
}
