#include "main.h"
/**
  * _abs-prints absolute value of an integer
  *@l : the integer to compute its abs value
  * Return:0 on
*/

int _abs(int l)
{
int m = l;
int absvalue;

if (m < 0)
{
	m = m * (-1);
}
absvalue = m;
return (absvalue);
}
