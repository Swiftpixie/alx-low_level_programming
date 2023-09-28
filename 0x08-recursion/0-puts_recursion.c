#include "main.h"

/**
 * __puts_recursion - function like puts();
 * @s:input
 * Return: Always 0 (Success)
 */

void _puts_recursions(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
