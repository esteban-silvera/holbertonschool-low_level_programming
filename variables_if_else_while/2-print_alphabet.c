#include <stdio.h>

int main(void)
{
	init l;
	l = 97;
	while(l < 122)
	{
		putchar(" %c ", l);
		l++;
	}
}
