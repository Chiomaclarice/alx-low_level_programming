#include "main.h"
/**
  *print_sign-check the sign of a number
  *
  * @n:Number whose sign is to be checked
  * Return:1 if n is positive -1 if n is negative 0-if n is zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

