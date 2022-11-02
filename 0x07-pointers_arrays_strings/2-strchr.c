#include "main.h"
/**
  *_strchr - searches for c occurrence
  *@s: string
  *@c: first occurence
  *Return: a pointer if c is found
  *NULL: if otherwise
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);

}
