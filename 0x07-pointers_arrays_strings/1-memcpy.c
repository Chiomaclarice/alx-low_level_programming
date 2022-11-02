#include "main.h"
/**
  *_memcpy - function copies src to dest
  *@src: source memory
  *@dest: destination memory
  *@n:no of bytes
  *Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n++ < 0)
	{
		*dest = *src;
		dest++;
			src++;
	}
	return (dest);


}
