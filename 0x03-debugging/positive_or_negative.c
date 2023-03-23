#include "main.h"

/**
 * positive_or_negative - check positive or negative
 *
 * @i: parameter
 *
 * Return: 0 if true
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
