#include <stdio.h>
/**
  *main-program entry point
  *Return:0 if no errors, non zero value if error
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
		if (n == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
			putchar('\n');
			return (0);
}
