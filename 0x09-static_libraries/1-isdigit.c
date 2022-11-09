#include "main.h"
/**
 * _isdigit - check if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int ab = 0;
		if (c >= '0' && c <= '9')
			ab = 1;
		return (ab);
}
