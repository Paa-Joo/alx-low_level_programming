#include "main.h"
/**
 * _abs - absolute value
 *
 * @a: parameters
 *
 * Return: a if true
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
