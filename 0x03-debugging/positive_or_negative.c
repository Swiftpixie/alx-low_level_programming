#include "main.h"

/**
 * positive_or_negative - Determine if a number is positive, zero, or negative.
 * @n: The number to be checked.
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}

