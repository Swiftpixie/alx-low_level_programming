#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
		array++;
	}
}
