#include "main.h"
/**
 * jack_bauer - funtion print the hour
 */
void jack_bauer(void)
{
int hor;
int min;

	for (hor = 0; hor <= 23; hor++)
{
	for (min = 0; min <= 59; min++)

{
	_putchar(hor / 10 + '0');
	_putchar(hor % 10 + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(mmin % 10 + '0');
	_putchar('\n');

}
}

}
