#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char ABC;

	for (ABC = 'a'; ABC <= 'z'; ABC++)
	{
		putchar(ABC);
	}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	{
		putchar(ABC);
	}
	putchar('\n');
	return (0);
}
