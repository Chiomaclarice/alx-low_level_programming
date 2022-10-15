#include <stdio.h>
/**
  *main-program entry point
  *Return:0 if no error, non zero value if no error
**/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
		putchar ('\n');
		return (0);
}
