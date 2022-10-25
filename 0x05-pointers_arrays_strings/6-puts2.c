#include "main.h"
/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[1]);
		else
			continue
	}
	_putchar('\n');
}
