#include "holberton.h"
#include <stdlib.h>

/**
  * *create_array - creates an array of chars, and initializes
  *  it with a specific char.
  *  @c: char to initialize
  *  @size: number of bytes to allocate
  *
  *  Return: a pointer to the array or null if it fail
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);


}
