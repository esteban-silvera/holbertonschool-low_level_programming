#include "function_pointers.h"
void
array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
