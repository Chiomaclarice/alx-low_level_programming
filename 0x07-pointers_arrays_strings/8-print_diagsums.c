#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - print the sum of two diagonals of square matric
  *
  *@a: the matrix
  *@size: the size
  *
  *Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int s, sum1 = 0, sum2 = 0;

	for (s = 0; s < size; s++)
	{
		sum1 += a[(size + 1) * s];
		sum2 += a[(size - 1) * (s + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
