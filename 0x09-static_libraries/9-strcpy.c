#include "main.h"
#include <stdio.h>
/**
  *_strcpy - copies the string pointed to by src,
  *including the terminating null byte, to the
  *buffer pointed to by dest.
  *@dest: destination
  *@src: source
  *Return: the ointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int kt = 0;

	while (kt >= 0)
	{
		*(dest + kt) = *(src + kt);
		if (*(src + kt) == '\0')
			break;
		kt++;
	}
	return (dest);
}
