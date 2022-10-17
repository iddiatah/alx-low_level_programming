#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a;
		for (a = 000; a < 10; a++)
	{
		putchar(0);
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
