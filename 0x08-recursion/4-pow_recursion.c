#include "main.h"
/**
  * _pow_recursion -  is the name of function
  * @x: parameter 1
  * @y: parameter 2
  * Return: 0 when function end
  */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
