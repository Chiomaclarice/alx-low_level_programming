#include "main.h"
/**
  *rev_string-function reverses a string
  *@s: pointer
  *return: void
*/

void rev_string(char *s)
{
	int k = 0, i, j;

	while (kt >= 0)
	{
		if (s[kt] == '\0')
			break;
	kt++;
	}
	str = s;
	for (i = 0; i < (kt - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
		temp = *(str + j);
		*(str + j) = *(str + (j - 1));
		*(str + (j - 1)) = temp;
	}

	}

}
