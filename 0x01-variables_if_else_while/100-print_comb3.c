#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int j, k;
j = 0;
k = 0;
	while (j < 10)
	{
		k = j + 1;
		while (k < 10)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (j < 8 || k < 9)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

