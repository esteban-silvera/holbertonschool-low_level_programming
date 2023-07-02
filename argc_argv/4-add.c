#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
	int s = 0;
	int n;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	for (n = 1; n < argc; n++)
	{
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (isdigit(argv[n][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[n]);
	}

	printf("%d\n", s);
	return (0);
}
