#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints "the code generate a one number random to N and comparated whit
 0 for now is a positive negativo or 0"
 */

int main(void)
{
	srand(time(NULL));
	int n = rand();

	if (n > 0)
	{
		printf("is positive")
	}
	else if (n < 0)
	{
		prifnt("is negative")
	}
	else
	{
	       	prinft("is zero")
	}
	return 0;
}

