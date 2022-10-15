#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char d;
d = 'a';
	while (d <= 'z')
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
