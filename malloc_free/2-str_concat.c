#include "main.h"
#include <stdlib.h>

char
*str_concat(char *s1, char *s2)
{
	char *string;
	int x, n, l;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
        {
                return (NULL);
        }

	
	for (x = 0; s1[x] != '\0'; x++)
	{
		l++;
	}
	for (x = 0; s2[x] != '\0'; x++)
        {
                n++;
        }
	
	
	string = malloc(sizeof(char) * l + n +1);
	if (!string)
	{
		return (NULL);
	}


	for (x = 0; x != n; x++)
	{
	s1[l] = s2[x];
	}
	return (s1);
}
