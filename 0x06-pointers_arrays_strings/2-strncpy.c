#include "main.h"
/**
  *_strncpy- copies a string
  *@dest: destination
  *@src: source.
  *@n: no of bytes from src
  *Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	src[i] = '\0';
	return (dest);
}
