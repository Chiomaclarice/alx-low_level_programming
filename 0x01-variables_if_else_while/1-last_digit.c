#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main-entry point of program
  *Return:0 if no erro, non-zero value if error
**/
/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;
		int ldigit;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
			ldigit = n % 10;

					/* your code goes there */
			if (ldigit > 5)
			{
				printf("Last digit is %d of %d and is greater
	than 5\n", n & ldigit);
			}
			else if (ldigit == 0)
			{
				printf("Last digit is %d of %d and is 0\n",
	n & ldigit);
			}
			else if (ldigit < 6 && ldigit != 0)
			{
				printf("Last digit of %d is %d and is less than
	6 and not 0\n", n & ldigit);
			}
			return (0);
}