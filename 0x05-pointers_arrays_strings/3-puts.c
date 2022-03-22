#include "main.h"

/**
 * _puts - function with one argument
 * @str: one char type argument
 *
 * Description: print a string followed by a new line
 * Return: none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
