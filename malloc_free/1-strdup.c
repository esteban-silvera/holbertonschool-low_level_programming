#include "main.h"
#include <stdlib.h>

char
*_strdup(char *str)
{
	char *string;
	int x;
	
	for (x = 0 ; x != '\0'; x++)
	{
	string[x] = str[x];
	}	
	if (string == NULL)
	{
		return (NULL);
	}

}
