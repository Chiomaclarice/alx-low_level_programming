#include "main.h"
/**
  *print_last_digit - of a number n and return the value
  *@n:number to compute
  *Return: value of last digit
*/

int print_last_digit(int n)
{
	int ldigit;

	ldigit = n % 10;

	if (ldigit < 0)
	{
		ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}

