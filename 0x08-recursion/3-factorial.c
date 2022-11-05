#include "main.h"
/**
  *_factorial - function returns the factorial of a given number
  *@n: given number
  *Return: -1 if n is less than 0, 1 if it is equal to 0
  *else return factorial n.
*/

int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
