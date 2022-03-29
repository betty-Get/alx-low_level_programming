#include "main.h"

/**
 * *_memset - copy value to the first n bytes
 * @s: points to memory area
 * @b: the character copied to memory
 * @n: memory area gone be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return(s);
}
