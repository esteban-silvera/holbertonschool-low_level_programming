#include "main.h"
/**
 *print_rev - function print a text reverse
 *@s: the string
 */

void rev_string(char *s)
{
	int x;
	int n = 0;
	char r;
	int a

	while (s[n] != '\0')
	{
		n++;
	}
	
	a = n - 1;

	for (x = 0; x < n / 2 ; x--)
	{
		r = s[x];
		s[x] = s[a];
		s[a] = 0;
		a--;
	}
}
