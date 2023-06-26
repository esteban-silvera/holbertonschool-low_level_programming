#include "main.h"

/**
 *
 *
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
	if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (x == 0|| str[x] - 1 == '.' || str[x - 1] == ' ' || str[x - 1] == '\t'|| tr[x] - 1 == '!' || tr[x] - 1 == ',' || tr[x] - 1 == ',' || tr[x] - 1 == ';' || tr[x] - 1 == '?' || tr[x] - 1 == '"' || tr[x] - 1 == '(' || tr[x] - 1 == ')' || tr[x] - 1 == '{' || tr[x] - 1 == '}' || tr[x] - 1 == '\n')
			{
				str[x] -= 32;
			}
		}
	x++;
	}
	return (str);

}
