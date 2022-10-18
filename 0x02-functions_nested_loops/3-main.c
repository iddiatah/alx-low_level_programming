#include "main.h"
/** 
 * main - chech the code
 * Return: 0
 */
int main(void)
{
	int lower;
	lower = _islower('H');
	_putchar( lower + '0');
	lower = _islower('o');
	_putchar( lower + '0');
	lower = _islower(108);
	_putchar( lower + '0');
	_putchar('\n');
	return(0);
}
