#include "main.h"

/**
 *
 *
 */

char *leet(char *src)
{
	char letters[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't', '\0'};
	char replace[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7', '\0'};
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (letters[j] == src[i])
			{
				src[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (src);
}
