#include "holberton.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
