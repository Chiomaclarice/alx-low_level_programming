#include "main.h"
/**
  *_isdigit- checks if parameter is a digit through 0 - 9
  *@c: input  number
  *Return: 1 if is a number(0-9) otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
