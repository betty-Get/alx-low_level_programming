#include "main.h"
#include <string.h>

/**
 * rev_string - function with one argument
 * @s: char type argument
 *
 * Description: reversing a string
 * Return: na
 */
void print_rev(char *s)
{
	for(int i = strlen(s)-1; i>=0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
