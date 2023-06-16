#include <stdio.h>
/**
 * main - main function
 * Return: 0.
 */

int main(void)
{
	char NoQE;

	for (NoQE = 'a'; NoQE <= 'z'; NoQE++)
	{
		if (NoQE != 'e' && NoQE != 'q')
		{
			putchar(NoQE);
		}
	}
	putchar('\n');
	return (0);
}

