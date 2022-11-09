#include "main.h"
#include <stdio.h>
/**
  *_strchr - searches for c occurrence
  *@s: string
  *@c: first occurence
  *Return: a pointer if c is found
  *NULL: if otherwise
*/

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
