#include "function_pointers.h"

int
int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int x = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1)
		}
		else if (size > 0)
		{
			while (x < size)
			{
				if (cmp(array[x]))
				{
					return (x);
				}
				x++
			}
		}
	}
}
