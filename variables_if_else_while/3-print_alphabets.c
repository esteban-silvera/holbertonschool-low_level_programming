#include <stdio.h>

int main() {
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
