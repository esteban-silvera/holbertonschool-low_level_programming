#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	int x;
	int n;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		n = atoi(argv[2]);

		printf("%d\n", x * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
