#include "main.h"

/** print_chessboard -  the fuction print a cheasboard
 * @a: the fichas
 * @8: the logn of a board
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
		_putchar('\n')
	}
}
