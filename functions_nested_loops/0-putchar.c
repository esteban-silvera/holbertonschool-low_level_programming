#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0.
 */

int main(void)
{
	const char* strg = "_putchar";
	int i;

	for (i = 0; strg[i] != '\0'; i++)
	{
		putchar(strg[i]);
	}
	putchar('\n');
	return (0);
}
