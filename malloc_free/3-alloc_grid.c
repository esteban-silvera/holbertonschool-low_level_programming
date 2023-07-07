#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int **x;
	int a, w;

	if (width <= 0)
	{
		return ('\0');
	}
	if (height <= 0)
	{
		return ('\0');
	}
	
	x = malloc(sizeof(int*) * height);
	if (!x)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);

		if (x[a] == NULL)
		{
			for(; a > 0; a--)
			{
				free(x[a]);
			}
			free(x);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (w = 0; w < width; w++)
		{
			x[a][w] = 0;
		}
	}
	return (x);
}
