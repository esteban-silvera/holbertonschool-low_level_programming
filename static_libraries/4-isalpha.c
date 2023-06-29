#include "main.h"
/**
 *_isalpha - verific is a upercase o lowe or a another
 * @c: is a the caracter
 *
 * Return: Returns 1 if c is lowercase or uper and retunr 0 is another
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	return (0);
}
