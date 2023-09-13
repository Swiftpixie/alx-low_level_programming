#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
