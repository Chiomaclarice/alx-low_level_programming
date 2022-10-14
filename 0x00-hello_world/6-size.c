#include <stdio.h>
/**
  *main-entry point for the program
  *
  *Return:0 if no error, non value zeros if errors.
 */
int main(void) 
{
	printf("Size of a char: %c byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %Id byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %IId byte(s)\n",sizeof(long long int));
	printf("Size of a float: %f byte(s)\n",sizeof(float));
	return (0);
}
