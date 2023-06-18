#include <stdio.h>
#include "main.c"

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
	return (0);
}
