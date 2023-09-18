#include "main.h"

/**
 * swap_int - take in two variable integres and swaps them
 * @author Anisah
 *@a: swaps and stores adress of b
 *@b: swaps and stores adress of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
