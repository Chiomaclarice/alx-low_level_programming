#include <stdio.h>
/**
  *_strlen- function prints length of string
  *@s: string whose length is being checked
  *Return:len
*/

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	return (len);
}
