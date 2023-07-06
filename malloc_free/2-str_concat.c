#include "main.h"
#include <stdlib.h>

char
*str_concat(char *s1, char *s2)
{
	char *string;
	int x, n = 0, l = 0;
	int s;

	
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
        {
		s2 = " ";
        }
	
	
	for (x = 0; s1[x] != '\0'; x++)
	{
		l++;
	}
	for (x = 0; s2[x] != '\0'; x++)
        {
                n++;
        }
	s = l + 1 + 1 + n;
	
	string = malloc(sizeof(char) * s);
	if (!string)
	{
		return (NULL);
	}


	for (x = 0; x != l; x++)
	{
	string[x] = s1[x];
	}

	for (x = 0; x != n; x++, l++)
	{
	string[l] = s2[x];
	}
	return (s1);
}
