#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int un;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	un = n % 10;
	if (un > 5){
		printf("Last digit of %d is %d and is greater than 5",n ,un);
	}else if (un == 0){
		printf("is 0 and is 0");
	}else if (un < 6){
		printf("and is less than 6 and not 0.\n");
	}
	return (0);
}
