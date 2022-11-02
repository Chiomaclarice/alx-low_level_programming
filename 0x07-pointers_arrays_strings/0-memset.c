#include "main.h"
/**
  *_memset - function returns pointer s
  *@n: bytes to fill
  *@b: constant byte
  *@s: pointer
  *Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
