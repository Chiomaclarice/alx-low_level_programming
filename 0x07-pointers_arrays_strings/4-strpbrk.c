#include "main.h"
/**
  *_strpbrk - search a string for any set of bytes
  *@s: source code
  *@accept: accepted characters
  *
  *Return: the string since the first accepted character
*/

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while accept([b])
		{
			if (s[a] == accept[b])
			{
				s = s + a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
