#include "main.h"

/**
 * *_memcpy - copy data form src to dest
 * @dest: copy data to dest
 * @src: data copied from here
 * @n: copied to n memory space
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
