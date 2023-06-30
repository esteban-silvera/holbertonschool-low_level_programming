#include <stdio.h>

int
main(int argc, char *argv)
{
	int x;
	for (x = 0; x < argc ; x++)
	{
		printf("%d\n", argv[x]);

		return (0);
	}
}
