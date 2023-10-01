#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s:input
 * Description: This function prints each character of the input string
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
