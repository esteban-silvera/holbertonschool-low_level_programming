#include "main.h"
/**
 *print_rev - function print a text reverse
 *@s: the string
 */

void rev_string(char *s)
{
	int i;
	int x = 0;
	char o;
	int j = x -1;


	while (s[x] != '\0')
	{
		x++;
	}


	for (i = 0; i < x / 2; i++)
	{
		o = s[i];
		s[i] = s[j];
		s[j] = o;
		j--;
	}


}
